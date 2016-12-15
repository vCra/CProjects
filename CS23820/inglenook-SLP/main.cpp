#include <iostream>
#include <boost/filesystem.hpp>
#include "station.h"

station trackSystem;

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
    std::cout << "Input: ";
    int input;
    std::cin >> input;
    return input;
}
std::string getInputString(){
    std::cout << "Input: ";
    std::string input;
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
    trackSystem.printSetup();
//    TODO: Implament this

}
void importSidings(){
    std::cout << "## Import Sidings ##" << std::endl;
    std::cout << "1. Import from file" << std::endl;
    std::cout << "2. Import manually " << std::endl;
    int input = getInput();
    switch(input){
        case 1 : {
            //Import from file
            std::cout << "Enter the location of the file." << std::endl;
            std::string fileLocation;
            fileLocation = getInputString();
            if (boost::filesystem::exists(fileLocation)){
                std::ifstream file(fileLocation);
                std::string line;
                while (std::getline(file,line)){
                    boost::tokenizer<boost::escaped_list_separator<char> > tok(line);
                    auto tokenIterator = tok.begin();
                    trackSystem.addSiding(siding(trackSystem.getNumberOfSidings())); //TODO: Import sidings from file
                }
            }
        }
        case 2 : {
            //TODO: Create siding manually

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
            std::cout << "Enter the location of the file." << std::endl;
            std::string fileLocation;
            fileLocation = getInputString();
            if (boost::filesystem::exists(fileLocation)){
                std::ifstream file(fileLocation);
                std::string line;
                while (std::getline(file,line)){
                    boost::tokenizer<boost::escaped_list_separator<char> > tok(line);
                    auto tokenIterator = tok.begin();
                    trackSystem.addWagon(wagon(tokenIterator));
                }
            }
            else {
                std::cout << "Unable to find File!" << std::endl;
            }


            break;
        }
        case 2 : {
            int wId;
            std::string wComp;
            std::string wGoods;
            std::cout << "Enter the wagon's ID" << std::endl;
            wId=getInput();
            std::cout << "Enter the wagon's Company" << std::endl;
            wComp=getInputString();
            std::cout << "Enter the wagon's Goods" << std::endl;
            wGoods = getInputString();
            trackSystem.addWagon(wagon(wId, wGoods, wComp));
            break;
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