#ifndef QUADRATIC_H
#define QUADRATIC_H

#include <iostream>
#include <cmath>
using namespace std;

class Quadratic
{
private:
    double a, b, c;

    double discriminant() const
    {
        return b * b - 4 * a * c;
    }

public:
    Quadratic(double a, double b, double c) : a(a), b(b), c(c) {}

    void print() const
    {
        cout << a << "x^2 + " << b << "x + " << c << endl;

        double d = discriminant();

        if (d > 0)
        {
            double root1 = (-b + sqrt(d)) / (2 * a);
            double root2 = (-b - sqrt(d)) / (2 * a);
            cout << "Root 1: " << root1 << "   Root 2: " << root2 << endl;
        }
        else if (d == 0)
        {
            double root = -b / (2 * a);
            cout << "Root 1: " << root << "   Root 2: " << root << endl;
        }
        else
        {
            cout << "The equation has no roots." << endl;
        }
    }
};

#endif