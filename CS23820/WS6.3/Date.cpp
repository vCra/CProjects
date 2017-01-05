/*
 * File:   Date.cpp
 */
#include "Date.h"
#include <iostream>

Date::Date(int dd, int mm, int yy) {
    day = dd;
    month = mm;
    year = yy;
}

Date::~Date() {
};

int Date::getYear(void) const {
    return year;
}

int Date::getMonth(void) const {
    return month;
}

int Date::getDay(void) const {
    return day;
}

void Date::printAnniversary() const {
    std::cout << day << '/' << month;
}
