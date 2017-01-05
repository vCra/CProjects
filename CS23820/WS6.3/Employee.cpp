/*
 * File:   Employee.cpp
 */
#include "Employee.h"
#include <iostream>

Employee::Employee(
        const std::string &theName,
        const Date &dateOfBirth,
        double startSalary)
        : name(theName), birthDate(dateOfBirth) {

    salary = startSalary;
    std::cout << "Employee constructor for " << name << '\n';
}

Employee::~Employee(void) {
    std::cout << "Employee destructor for " << name << '\n';
}

void Employee::print(void) const {
    using namespace std;
    cout << "Employee: " << name << ' ';
    cout << "Birthday: ";
    birthDate.printAnniversary();
    cout << " Salary: " << salary << endl;
}

void Employee::promotion(double salaryIncrease) {
    salary += salaryIncrease;
}

double Employee::getSalary(void) const {
    return salary;
}

