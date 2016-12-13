#include <iostream>



void printMenu(){
    std::cout << "Inglenook Sidings aaw13" << std::endl;
    std::cout << "1. Import Wagons" << std::endl;
    std::cout << "2. Import Sidings" << std::endl;
    std::cout << "3. Print Current Setup" << std::endl;
    std::cout << "4. Move Wagons" << std::endl;
    std::cout << "9. Quit" << std::endl;
    std::cout << std::endl;
}

int getInput(){
    std::cout << "input: ";
    int input;
    std::cin >> input;
    return input;
}
void moveWagons(){
    std::cout << "##         Move Wagons        ##" << std::endl;
    std::cout << "1. Move from Siding to HeadShunt" << std::endl;
    std::cout << "2. Move from HeadShunt to Siding" << std::endl;
    int input = getInput();
    switch(input){
        case 1 : {
            std::cout << "Enter the siding number" << std::endl;
            int siding = getInput();
        }
        case 2 : {
            std::cout << "Enter the siding number" << std::endl;
            int siding = getInput();
        }
        default : std::cout << "!!! Unknown Option !!!" << std::endl;
    }
}
void printSetup(){

}
void importSidings(){
    std::cout << "## Import Sidings ##" << std::endl;
    std::cout << "1. Import from file" << std::endl;
    std::cout << "2. Import manually " << std::endl;
    int input = getInput();
    switch(input){
        case 1 : {
            //Import from file
        }
        case 2 : {
            //Import Manually
        }
        default : std::cout << "!!! Unknown Option !!!" << std::endl;
    }
}
void importWagons(){
    std::cout << "## Import Wagons ##" << std::endl;
    std::cout << "1. Import from file" << std::endl;
    std::cout << "2. Import manually " << std::endl;
    int input = getInput();
    switch(input){
        case 1 : {
            //Import from file
        }
        case 2 : {
            //Import Manually
        }
        default : std::cout << "!!! Unknown Option !!!" << std::endl;
    }
}
void run(){
    printMenu();
    int input = getInput();
    while (input != 9){
        switch(input){
            case 1 : {importWagons(); break;}
            case 2 : {importSidings(); break;}
            case 3 : {printSetup(); break;}
            case 4 : {moveWagons(); break;}
            default: std::cout << "Not valid!" << std::endl;
        }
        printMenu();
        input = getInput();
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    run();
    return 0;
}