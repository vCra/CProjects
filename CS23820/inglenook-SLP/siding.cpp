//
// Created by aaron@vcra.net on 13/12/16.
//

#include "siding.h"


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
    wagons.push(wagon1);
}

