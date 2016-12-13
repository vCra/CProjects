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
    std::cout << "Option: ";
    int input;
    std::cin >> input;
    return input;
}
void moveWagons(){

}
void printSetup(){

}
void importSidings(){

}
void importWagons(){

}
void run(){
    printMenu();
    int input = getInput();
    while (input != 9){
        switch(input){
            case 1 :importWagons();
            case 2 : importSidings();
            case 3 : printSetup();
            case 4 : moveWagons();
        }
        input = getInput();
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    run();
    return 0;
}