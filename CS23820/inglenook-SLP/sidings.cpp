//
// Created by aaron@vcra.net on 13/12/16.
//

#include "sidings.h"

const std::stack<wagon> &sidings::getWagons() const {
    return wagons;
}

void sidings::setWagons(const std::stack<wagon> &wagons) {
    sidings::wagons = wagons;
}

int sidings::getSidingCapacity() const {
    return sidingCapacity;
}

void sidings::setSidingCapacity(int sidingCapacity) {
    sidings::sidingCapacity = sidingCapacity;
}

char sidings::getSidingName() const {
    return sidingName;
}

void sidings::setSidingName(char sidingName) {
    sidings::sidingName = sidingName;
}
