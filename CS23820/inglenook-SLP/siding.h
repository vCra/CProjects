//
// Created by aaron@vcra.net on 13/12/16.
//

#ifndef INGLENOOK_SLP_SIDINGS_H
#define INGLENOOK_SLP_SIDINGS_H


#include <stack>
#include "wagon.h"

class siding {
    private:
        std::stack<wagon>  wagons;
        int sidingCapacity;
        char sidingName;
public:
    int getSidingCapacity() const;

    void addWagonToSiding(wagon wagon1);

    void setSidingCapacity(int sidingCapacity);

    char getSidingName() const;

    void setSidingName(char sidingName);
};


#endif //INGLENOOK_SLP_SIDINGS_H
