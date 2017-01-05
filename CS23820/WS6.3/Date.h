/*
 * File:   Date.h
 */

#ifndef DATE_H
#define    DATE_H

class Date {
public:
    static const int monthsPerYear = 12;

    Date(int= 1, int= 1, int= 1900);

    ~Date();

    void printAnniversary() const;

    int getYear(void) const;

    int getMonth(void) const;

    int getDay(void) const;

private:
    int month;
    int day;
    int year;
};

#endif	/* DATE_H */

