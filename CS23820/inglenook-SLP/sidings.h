//
// Created by aaron@vcra.net on 13/12/16.
//

#ifndef INGLENOOK_SLP_SIDINGS_H
#define INGLENOOK_SLP_SIDINGS_H


#include <stack>
#include "wagon.h"

class sidings {
    private:
        std::stack<wagon> wagons;
        int sidingCapacity;
        char sidingName;
public:
    int getSidingCapacity() const;

    void setSidingCapacity(int sidingCapacity);

    char getSidingName() const;

    void setSidingName(char sidingName);

public:
    const std::stack<wagon> &getWagons() const;

    void setWagons(const std::stack<wagon> &wagons);
};


#endif //INGLENOOK_SLP_SIDINGS_H
