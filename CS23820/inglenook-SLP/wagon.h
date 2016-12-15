//
// Created by aaron@vcra.net on 13/12/16.
//

#ifndef INGLENOOK_SLP_WAGON_H
#define INGLENOOK_SLP_WAGON_H
#include "vehicle.h"

class wagon : public vehicle{
private:
    std::string goods;

public:
    wagon(int id, std::string goods, std::string company){
        vehicle(id, company);
        setGoods(goods);
    }
    wagon(boost::tokenizer<boost::escaped_list_separator<char> >::iterator &data);
    const std::string &getGoods() const;
    void setGoods(const std::string &goods);
};


#endif //INGLENOOK_SLP_WAGON_H
