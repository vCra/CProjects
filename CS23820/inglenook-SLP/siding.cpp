//
// Created by aaron@vcra.net on 13/12/16.
//

#include <iostream>
#include "siding.h"

siding::siding(int id, int cap){
    siding::setSidingName(id);
    siding::setSidingCapacity(cap);
}

int siding::getSidingCapacity() const {
    return sidingCapacity;
}

void siding::setSidingCapacity(int sidingCapacity) {
    siding::sidingCapacity = sidingCapacity;
}

int siding::getSidingName() const {
    return sidingName;
}

void siding::setSidingName(int sidingName) {
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

bool siding::isFull() {
    return false;
    //TODO
}

bool siding::isEmpty() {
    return false;
    //TODO
}

wagon siding::pop() {
    return wagons.back();
}

void siding::add(wagon wagon_) {

}

