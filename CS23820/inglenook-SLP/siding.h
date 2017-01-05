//
// Created by aaron@vcra.net on 13/12/16.
//

#ifndef INGLENOOK_SLP_SIDINGS_H
#define INGLENOOK_SLP_SIDINGS_H


#include <stack>
#include "wagon.h"

class siding {
    private:
        std::vector<wagon>  wagons;
        int sidingCapacity;
        int sidingName;
public:
        siding(int id, int qty);
        const std::vector<wagon> &getWagons();

        int getSidingCapacity() const;

        void addWagonToSiding(wagon wagon1);

        void setSidingCapacity(int sidingCapacity);

        int getSidingName() const;

        std::string toString();

        void setSidingName(int sidingName);

        bool isEmpty();

        bool isFull();

        void add(wagon wagon_);

        wagon pop();
};


#endif //INGLENOOK_SLP_SIDINGS_H
