#include "fraction.h"

Fraction::Fraction() {}

Fraction::Fraction(int p, int q) {
    this->p = p;
    this->q = q;
    // Запускаем алгоритм Евклида
    while (q != 0) {
        int r = p % q;
        p = q;
        q = r;
    }
    int gcd = p;
    this->p /= gcd;
    this->q /= gcd;
}

Fraction::Fraction(const Fraction& f) {
    int p = f.p;
    int q = f.q;
    this->p = p;
    this->q = q;
    // Запускаем алгоритм Евклида
    while (q != 0) {
        int r = p % q;
        p = q;
        q = r;
    }
    int gcd = p;
    this->p /= gcd;
    this->q /= gcd;
}

Fraction Fraction::operator=(const Fraction& src ) {
    this->p=src.p; 
    this->q=src.q; 
    return *this;
}

Fraction Fraction::operator+( const Fraction& src ) const{
    int newp = this->p * src.q + this->q * src.p;
    int newq = this->q  * src.q;
    Fraction result(newp, newq);
    return result;
   
}

Fraction Fraction::operator-( const Fraction& src ) const{
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