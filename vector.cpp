#include "vector.h"
#include "fraction.h"
#include <string>
using namespace std;
#include <iostream>


bool DEBUG = false;


 

std::ostream& operator<<(std::ostream& output, const Vector& vec) {
    for(int i = 0; i < vec.size; i++) {
        output << vec.get(i);
        if(i < vec.size - 1) {
            output << " ";
        }
    }
    return output;
}


Vector::Vector(int n) {
    this->size = n;
    this->src.resize(n);
}




Vector::Vector(vector<Fraction> vec) {
    this->size = (int)(vec.size());
    this->src.resize(vec.size());
    for (int i = 0; i < this->size; ++i) {
        this->src[i] = vec[i];
    }
    if (DEBUG) {
        cout << "Size == " << this->size << "\n";
        for (int i = 0; i < this->size; ++i) {
            cout << this->src[i];
            if (i < this->size - 1) {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void Vector::set(int index, Fraction value) {
    this->src[index] = value;
}

Fraction Vector::get(int index) const {
    return this->src[index];
}

Vector Vector::operator+(Vector& other) const {
    Vector result(this->size);
    for (int i = 0; i < this->size; ++i) {
        Fraction new_value = this->src[i] + other.get(i);
        result.set(i, new_value);
    }
    return result;
}

Fraction Vector::operator*(Vector& other) const {
    Fraction result(0, 1);
    for (int i = 0; i < this->size; ++i) {
        Fraction tmp = this->src[i] * other.get(i);
        result = result + tmp;
    }
    return result;
}

Vector Vector::operator-(Vector& other) const {
    Vector result(this->size);
    for (int i = 0; i < this->size; ++i) {
        Fraction new_value = this->src[i] - other.get(i);
        result.set(i, new_value);
    }
    return result;
}

