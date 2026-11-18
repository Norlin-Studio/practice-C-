#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <iomanip>
#include <stdexcept>

class Complex
{
private:
    double real;  // 實部
    double imag;  // 虛部

public:
    Complex(double r, double i) : real(r), imag(i) {}

    void addTo(const Complex& other)
    {
        real += other.real;
        imag += other.imag;
    }

    void subtractFrom(const Complex& other)
    {
        real -= other.real;
        imag -= other.imag;
    }

    void multiplyBy(const Complex& other)
    {
        double newReal = real * other.real - imag * other.imag;
        double newImag = real * other.imag + imag * other.real;

        real = newReal;
        imag = newImag;
    }

    void divideBy(const Complex& other)
    {
        double denominator = other.real * other.real
                           + other.imag * other.imag;

        if (denominator == 0)
        {
            throw std::invalid_argument("Cannot divide by zero.");
        }

        double newReal = (real * other.real + imag * other.imag)
                         / denominator;
        double newImag = (imag * other.real - real * other.imag)
                         / denominator;

        real = newReal;
        imag = newImag;
    }

    void print() const
    {
        std::cout << std::fixed << std::setprecision(2)
                  << std::showpos
                  << '(' << real << ") + i(" << imag << ")\n"
                  << std::noshowpos;
    }
};

#endif