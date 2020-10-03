#include <iostream>
#include "vector.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>
#include <vector>
#include "vector.h"
#include "fraction.h"
using namespace std;


int main() {
    
    int n = 3;
    
    vector<Fraction> x = {Fraction(1,2), Fraction(3,4), Fraction(5,6)}; 
    Vector v_x(x);
    cout << "v_x = " << v_x << "\n";
    vector<Fraction> y = {Fraction(3,4), Fraction(5,2),Fraction(7,6)}; 
    Vector v_y(y);
    cout << "v_y = " << v_y << "\n";
    Vector v_sum = v_x + v_y;
    cout << "v_x + v_y = " << v_sum << "\n";
    Fraction v_dot = v_x * v_y;
    cout << "v_x * v_y = " << v_dot << "\n";
    Vector v_sub = v_x - v_y;
    cout << "v_x - v_y = " << v_sub << "\n";
    
    
    return 0;
}