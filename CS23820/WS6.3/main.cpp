/* 
 * File:   main.cpp
 */

#include <cstdlib>
#include "Employee.h"
//#include "Employee.cpp"
//#include "Date.cpp"
#include <iostream>

using namespace std;

void useEmployee(Employee const *emp) {
    emp->print();
    //emp->promotion(100); //we can't do this...good!
    cout << "Salary is: " << emp->getSalary() << '\n';
}

/*
 * 
 */
int main(int argc, char **argv) {
    Date d;
    Employee emp("Neal", d);
    emp.print();

    cout << "\nsizeof(Date) is " << sizeof(Date) <<
         " sizeof(Employee) is " << ' ' << sizeof(Employee) << endl;

    cout << "\nPromotion ! \n";
    emp.promotion(1000.00);
    emp.print();

    // count Employee objects created
    cout << "\n\n";
    Employee *myEmployee = new Employee("Joe", Date(25, 3, 1983), 18000.00);

    //make one that can't be changed
    Employee const *ce = myEmployee;

    // can only give ce to functions that accept const objects
    useEmployee(ce);

    cout << "\nALL DONE" << endl;
    //cout << "\nWe have " << Employee::getCountEmployeesCreated() << " employee objects\n";

    return 0;
}



