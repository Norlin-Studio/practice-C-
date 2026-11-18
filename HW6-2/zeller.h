#ifndef ZELLER_H
#define ZELLER_H

#include <iostream>
#include <string>

class Zeller
{
private:
    int month, day, year;

    int calculateWeekday() const
    {
        int m = month;
        int y = year;

        if (m == 1 || m == 2)
        {
            m += 12;
            y -= 1;
        }

        return (day + 26 * (m + 1) / 10
                + y + y / 4 - y / 100 + y / 400) % 7;
    }

public:
    Zeller(int m, int d, int y)
        : month(m), day(d), year(y) {}

    void print() const
    {
        std::string names[7] = {
            "Saturday", "Sunday", "Monday", "Tuesday",
            "Wednesday", "Thursday", "Friday"
        };

        std::cout << month << '/' << day << '/' << year
                  << " is " << names[calculateWeekday()]
                  << '\n';
    }
};

#endif