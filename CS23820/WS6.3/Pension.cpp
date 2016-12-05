/*
 * File:   Pension.cpp
 * Author: nealsnooke
 *
 * Created on 16 February 2011, 14:33
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include "Pension.h"

#include <ctime> // time and date

int getCurrentYear(void) {
    time_t rawtime = time(&rawtime);
    int time = localtime(&rawtime)->tm_year + 1900;
}

Pension::Pension(std::string scheme, double performance) {
    this->performance = performance;
    schemeName = scheme;
}

Pension::~Pension() {};

double Pension::calculateBenefits(Employee &e, int monthsInScheme) {

    double amount = e.salary * monthsInScheme * performance;

    int age = getCurrentYear() - e.birthDate.getYear();
    std::cout << "Pension::calculateBenefits Age is: " << age << '\n';
    if (age < 65) {
        // reduce amount - not retirement age
        amount = amount / (65 - age);
    }
    return amount;
}

void Pension::print() const {
    using namespace std;

    cout << "Pension scheme: " << schemeName << " : Performance " << performance << '\n';
}

