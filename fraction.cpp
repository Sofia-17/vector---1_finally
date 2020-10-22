#include "fraction.h"

Fraction::Fraction() {
    this->p = 0;
    this->q = 1;
}   // конструктор по умолчанию

int Fraction::gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

Fraction::Fraction(int p, int q) {
    this->p = p;
    this->q = q;
    // Запускаем алгоритм Евклида
    int g = this->gcd(p, q);
    this->p /= g;
    this->q /= g;
}

Fraction::Fraction(const Fraction& f) {
    this->p = f.p;
    this->q = f.q;
    // Запускаем алгоритм Евклида
    int g = this->gcd(f.p, f.q);
    this->p /= g;
    this->q /= g;
}

Fraction Fraction::operator=(const Fraction& src ) {
    this->p=src.p; 
    this->q=src.q; 
    return *this;
}

Fraction Fraction::operator+(const Fraction& src) const{
    int newp = this->p * src.q + this->q * src.p;
    int newq = this->q  * src.q;
    Fraction result(newp, newq);
    return result;
   
}

Fraction Fraction::operator-(const Fraction& src) const{
    int newp = this->p * src.q - this->q * src.p;
    int newq = this->q  * src.q;
    Fraction result(newp, newq);
    return result;
   
}

Fraction Fraction::operator*( const Fraction& src ) const{
    int newp = this->p * src.p;
    int newq = this->q  * src.q;
    Fraction result(newp, newq);
    return result;
   
}

std::ostream& operator<<(std::ostream& output, const Fraction& f) {
    output << "(" << f.p << "/";
    output << f.q << ")" ;
    return output;
}