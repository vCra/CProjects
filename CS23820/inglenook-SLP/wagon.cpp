//
// Created by aaron@vcra.net on 13/12/16.
//
#include <iostream>
#include <boost/tokenizer.hpp>
#include <boost/variant.hpp>
#include "wagon.h"

const std::string &wagon::getGoods() const {
    return goods;
}


void wagon::setGoods(const std::string &goods) {
    wagon::goods = goods;
}

wagon::wagon(boost::tokenizer<boost::escaped_list_separator<char> >::iterator &data) : vehicle(data) {
    int serial_no_ = std::stoi(*data);
    ++data;

    std::string owner_ = *data;
    ++data;

    std::string goods_ = *data;
    data++;

    vehicle(serial_no_, owner_);
    wagon::setGoods(goods_);
}
