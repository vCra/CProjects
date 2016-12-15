//
// Created by aaron@vcra.net on 14/12/16.
//

#ifndef INGLENOOK_SLP_STATION_H
#define INGLENOOK_SLP_STATION_H

#include <iostream>
#include "siding.h"

class station {
    private:
        int numberOfSidings;
public:
    int getNumberOfSidings() const;

private:
    std::vector<siding> sidings;
        std::vector<wagon> wagons;
public:
    //const std::vector<siding> &getSidings() const;
    //void setSidings(const std::vector<siding> &sidings);
    void addSiding(siding &siding1);
    void printSetup();
    void wagonToSidigng(wagon wagon1, siding siding1);
    void addWagon(wagon wagon_);
    wagon moveWagon(int siding1, int siding2);
};


#endif //INGLENOOK_SLP_STATION_H
