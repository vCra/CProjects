#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <strings.h>
#include <string.h>

void showWelcome(int sock){
    write(sock,"Inglenook sidings aaw13\n",25);

}
typedef struct {
    char status;
} point;

typedef struct {
    int Capacity;
    int Stored; //the ammount of wagons currently in the
} siding;
typedef struct {
    siding Sidings[4];
    point Points[2];
} track;
char* getStatus(int point, track* Track){
    if (Track->Points[point].status=='N') {
        return "NORMAL";
    }
    else if (Track->Points[point].status=='R') {
        return "REVERSE";
    }
}
void printStatus(track* Track, int status, int socket){
    char str[80];
    strcpy(str, "STATUS ");
    //strcat(str, (__STRING(status)));
    strcat(str, getStatus(0, Track));
    strcat(str, " ");
    strcat(str, getStatus(1, Track));
    strcat(str, "\n");
    printf(str);
    write(socket,str,80);

}
void movePoints(int siding, track* Track){
    switch(siding){
        case 1:
            Track->Points[0].status='R';
            break;
        case 2:
            Track->Points[0].status='N';
            Track->Points[1].status='R';
            break;
        case 3:
            Track->Points[0].status='N';
            Track->Points[1].status='N';
            break;
        default:
            break;
    }
}
int trackPut(int sidingNumber, int numberWagons, track* Track){
    if(Track->Sidings[sidingNumber].Stored + numberWagons > Track->Sidings[sidingNumber].Capacity){
        return -1;
    }
    else if(Track->Sidings[0].Stored < numberWagons){
        return -2;
    }
    else if((sidingNumber < 0)||(sidingNumber> 3)){
        return -3;
    }
    else{
        movePoints(sidingNumber, Track);
        return numberWagons;
    }
};
int trackTake(int sidingNumber, int numberWagons, track* Track){
    if(Track->Sidings[0].Stored+numberWagons > Track->Sidings[0].Capacity){
        return -1;
    }
    else if(Track->Sidings[sidingNumber].Stored < numberWagons){
        return -2;
    }
    else if (sidingNumber <3 || sidingNumber>3){
        return -3;
    }
    else{
        movePoints(sidingNumber, Track);
        return numberWagons;
    }
};
int init(track* Track){
    Track->Sidings[0].Capacity=3;
    Track->Sidings[1].Capacity=5;
    Track->Sidings[2].Capacity=3;
    Track->Sidings[3].Capacity=3;
    Track->Points[0].status='N';
    Track->Points[1].status='N';
    return 1;
};

int trackLoad(int s1, int s2, int s3, track* currentTrack){
    currentTrack->Sidings[1].Stored=s1;
    currentTrack->Sidings[2].Stored=s2;
    currentTrack->Sidings[3].Stored=s3;
    printf("Added wagons to track!");
};

int processSocket (int sock, track Track){
    int n;
    char buffer[256];
    bzero(buffer,256);
    n = read(sock,buffer,255);
    if (n < 0) {
        perror("ERROR reading from socket");
        exit(1);
    }

    char *a1;//Text argument
    int a2, a3, a4;//Numeric arguments
    int s; //For status

    a1 = strtok(buffer, " "); //split it up
    printf("Command is %s\n",a1);
    printf("-------------\n");
    if (a1=="put"){

        a2 = atoi(strtok(NULL, " "));
        a3 = atoi(strtok(NULL, " "));
        s = trackPut(a2, a3, &Track);
        printStatus(&Track, s, sock);

    }
    else if (a1=="take"){
        a2 = atoi(strtok(NULL, " "));
        a3 = atoi(strtok(NULL, " "));
        s = trackTake(a2,a3, &Track);
        printStatus(&Track, s, sock);

    }
    else if (a1=="load"){
        a2 = atoi(strtok(NULL, " "));
        a3 = atoi(strtok(NULL, " "));
        a4 = atoi(strtok(NULL, " "));
        s = trackLoad(a2,a3,a4, &Track);
        printStatus(&Track, s, sock);

    }
    printStatus(&Track, 4, sock);
    printf("%i", s);
    if (n < 0) {
        perror("ERROR writing to socket");
        exit(1);
    }
    return 0;
}

int main( int argc, char *argv[] ) {
    int sockfd, newsockfd, portno, clilen;
    char buffer[256];
    struct sockaddr_in serv_addr, cli_addr;
    int n, pid;

    //Setup track
    track Track;
    init(&Track);

    /* First call to socket() function */
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockfd < 0) {
        perror("ERROR opening socket");
        exit(1);
    }

    /* Initialize socket structure */
    bzero((char *) &serv_addr, sizeof(serv_addr));
    portno = 123456;

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(portno);

    /* Now bind the host address using bind() call.*/
    if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        perror("ERROR on binding");
        exit(1);
    }

    listen(sockfd,5);
    clilen = sizeof(cli_addr);

    while (1) {
        newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);

        if (newsockfd < 0) {
            perror("ERROR on accept");
            exit(1);
        }

        pid = fork();

        if (pid < 0) {
            perror("ERROR on fork");
            exit(1);
        }

        if (pid == 0) {
            close(sockfd);
            showWelcome(newsockfd);
            int stop=0;
            while(stop==0){

                stop = processSocket(newsockfd, Track);
            }
            write(newsockfd,"Goodbye\n",23);
            exit(0);
        }
        else {
            close(newsockfd);
        }

    } /* end of while */
}