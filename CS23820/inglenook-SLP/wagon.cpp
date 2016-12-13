//
// Created by aaron@vcra.net on 13/12/16.
//

#include "wagon.h"

const std::string &wagon::getGoods() const {
    return goods;
}

void wagon::setGoods(const std::string &goods) {
    wagon::goods = goods;
}
