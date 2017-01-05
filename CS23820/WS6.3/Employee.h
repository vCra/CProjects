/*
 * File:   Employee.h
 */

#ifndef EMPLOYEE_H
#define    EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee {
public:
    Employee(const std::string &, const Date &, double startSalary = 0);

    ~Employee(void);

    void print(void) const;

    void promotion(double);

    double getSalary(void) const;

    int getSalaryInfoRequestCount(void);

private:
    std::string name;
    const Date birthDate;
    const Date startDate;
    double salary;

    //static int employeesCreated;
};


#endif	/* EMPLOYEE_H */

