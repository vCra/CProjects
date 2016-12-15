//
// Created by aaron@vcra.net on 14/12/16.
//

#include <vector>
#include "station.h"


void station::addSiding(siding &siding1){
    sidings.push_back(siding1);
}

void station::wagonToSidigng(wagon wagon1, siding siding1){
    siding1.addWagonToSiding(wagon1);

}
void station::addWagon(wagon wagon_){
    wagons.push_back(wagon_);
}

