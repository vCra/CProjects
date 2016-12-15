//
// Created by aaron@vcra.net on 13/12/16.
//

#include <iostream>
#include "siding.h"

void siding::siding(int id, int cap){
    siding::setSidingName()
}

int siding::getSidingCapacity() const {
    return sidingCapacity;
}

void siding::setSidingCapacity(int sidingCapacity) {
    siding::sidingCapacity = sidingCapacity;
}

char siding::getSidingName() const {
    return sidingName;
}

void siding::setSidingName(char sidingName) {
    siding::sidingName = sidingName;
}

void siding::addWagonToSiding(wagon wagon1) {
    wagons.push_back(wagon1);
}

const std::vector<wagon> &siding::getWagons() {
    return wagons;
}
std::string siding::toString(){
    for(std::vector<wagon>::iterator wagIt = wagons.begin(); wagIt != wagons.end(); ++ wagIt){
        std::cout <<  wagIt.base()->getSerialNumber() << "=";
//        TODO: test this
    }
}
