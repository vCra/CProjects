
#include <stdio.h>
#include <stdlib.h>

double heightConverter(int feet, int inches) {
    double meters;
    meters = ((feet * 12) * 2.54) + (inches * 2.54);
    meters = (meters / 100);
    return meters;

}

int main(int argc, char** argv) {

    int feet;
    int inches;
    double meters;
    int i = 0;
    ;


    while (feet >= 0) {

        printf("What is your height in feet\n");
        scanf("%d", &feet);
        if (feet<0){

            break;
        }
        printf("What is your height in inches\n");
        scanf("%d", &inches);
        printf("Your height is %d feet & %d inches\n", feet, inches);
        meters = heightConverter(feet, inches);

        printf("Your height is %f meters!", meters);
    }
    return (EXIT_SUCCESS);
}