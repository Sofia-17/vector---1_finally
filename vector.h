#ifndef VECTOR_H
#define VECTOR_H

#include <vector>
#include <string>

#include "fraction.h"
#define N 5

class Vector {
public:
    Vector();

    Vector(std::vector<Fraction> vec); // вызываем конструктор , если изначально знаем массив 

    void set(int index, Fraction value);
    Fraction get(int index) const;

    Vector operator+(Vector& other) const;
    Fraction operator*(Vector& other) const;//in class
    Vector operator-(Vector& other) const;
    

    friend std::ostream& operator<< (std::ostream& output, const Vector& v);

    int size;

private:
    // std::vector<Fraction> src;
    Fraction src[N];
};

std::ostream& operator<< (std::ostream& output, const Vector& v);

#endif