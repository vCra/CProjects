/*
 * File:   Pension.h
 * Author: nealsnooke
 *
 * Created on 16 February 2011, 14:34
 */

#ifndef PENSION_H
#define    PENSION_H

#include <cstdlib>
#include <string>
#include "Employee.h"

class Pension {
public:
    Pension(std::string scheme, double performance);

    ~Pension();

    double calculateBenefits(Employee &e, int monthsInScheme);

    void print() const;

private:
    std::string schemeName;
    double performance;
};

#endif	/* PENSION_H */

