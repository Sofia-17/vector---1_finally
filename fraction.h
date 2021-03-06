#ifndef FRACTION_H
#define FRACTION_H

#include <vector>
#include <string>
#include <iostream>

class Fraction  {
    public:
        int p, q;
        Fraction();
        Fraction(int p, int q);
        Fraction(const Fraction& f);
        Fraction operator=(const Fraction& src);
        Fraction operator+(const Fraction& src) const;
        Fraction operator*(const Fraction& src) const;
        Fraction operator-(const Fraction& src) const;
        friend bool operator== (const Fraction &c1, const Fraction &c2);
        friend std::ostream& operator<< (std::ostream& output, const Fraction& f);
    private:
        int gcd(int, int);
};

std::ostream& operator<< (std::ostream& output, const Fraction& f); 
#endif
