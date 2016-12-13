//
// Created by aaron@vcra.net on 13/12/16.
//

#ifndef INGLENOOK_SLP_WAGON_H
#define INGLENOOK_SLP_WAGON_H
#include "vehicle.h"

class wagon : public vehicle{
public:
private:
    std::string goods;
public:
    const std::string &getGoods() const;

    void setGoods(const std::string &goods);
};


#endif //INGLENOOK_SLP_WAGON_H
