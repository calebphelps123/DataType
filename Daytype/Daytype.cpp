// Daytype.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

+---------------------------------- - +
| Date |
+---------------------------------- - +
| -month: int                      |
| -day : int                        |
| -year : int |
+---------------------------------- - +
| +Date()                          |
| +Date(month : int, day : int, year : int) |
| +setMonth(month : int)            |
| +setDay(day : int)                |
| +setYear(year: int)              |
| +getMonth() : int                 |
| +getDay() : int                   |
| +getYear() : int                  |
| +isLeapYear() : bool              |
| +getDaysInMonth() : int           |
| +printDate()                     |
| +daysPassed() : int               |
| +daysRemaining() : int            |
| +setDateFromFuture(days : int) |
+---------------------------------- - +

Header File(Date.h)
#ifndef DATE_H
#define DATE_H

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(); // Default constructor
    Date(int month, int day, int year); // Constructor with parameters

    // Setters
    void setMonth(int month);
    void setDay(int day);
    void setYear(int year);

    // Getters
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    // Other member functions
    bool isLeapYear() const;
    int getDaysInMonth() const;
    void printDate() const;
    int daysPassed() const;
    int daysRemaining() const;
    void setDateFromFuture(int days);

    // Destructor (if needed)
    // ~Date();
};

#endif // DATE_H
