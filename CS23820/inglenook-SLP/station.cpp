//
// Created by aaron@vcra.net on 14/12/16.
//

#include <vector>
#include "station.h"


void station::addSiding(siding &siding1){
    sidings.push_back(siding1);
    station::numberOfSidings++;
}

void station::wagonToSidigng(wagon wagon1, siding siding1){
    siding1.addWagonToSiding(wagon1);

}
void station::addWagon(wagon wagon_){
    wagons.push_back(wagon_);
}

void station::printSetup() {
    int sidingSize;
    for (std::vector<siding>::iterator sidIt = sidings.begin(); sidIt != sidings.end(); ++sidIt) {
//    TODO: print out sidings diagram
    }
}

siding getSiding(int sidingID){
}

//void station::moveWagon(int siding1, int siding2){
//    siding siding1_ = getSiding(siding1);
//    if (siding1_.isEmpty()){
//        std::cout << "Siding is empty - unable to move";
//    }
//    else{
//        siding siding2_ = getSiding(siding2);
//        if (siding2_.isFull()){
//            std::cout << "Siding is full - unable to move";
//        }
//        else{
//            siding2.add(siding1.pop());
////            TODO: Implament network functionality here too in order to move switches around
//        }
//    }
//
//}

int station::getNumberOfSidings() const {
    return numberOfSidings;
}



