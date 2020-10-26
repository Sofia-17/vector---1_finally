#include <iostream>
#include <fstream>
#include "vector.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>
#include <vector>
#include "vector.h"
#include "fraction.h"
using namespace std;

bool io = 0; // 1 -> console 0 -> file

bool equals(const Vector& l, const Vector& r) {
    
    for (int i = 0; i < N; ++i) {
        if ((l.get(i).p != r.get(i).p) || (l.get(i).q != r.get(i).q)) {
            return false;
        }
    }
    return true;
}


int main() {
    // srand( (unsigned)time(NULL) );
    //  int n = 5; -> Задается теперь в "vector.h" как N через препроцессор
    srand(time(NULL));
    std::ifstream cin("INPUT.TXT");
    std::ofstream cout("OUTPUT.TXT");
    ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; ++i) {
        Vector a;
        Vector b;
        for (int i = 0; i < N; ++i) {
            int p, q;
            cin >> p >> q;
            a.set(i, Fraction(p, q));
        }
        for (int i = 0; i < N; ++i) {
            int p, q;
            cin >> p >> q;
            b.set(i, Fraction(p, q));
        }
        Vector test_sum;
        Vector test_sub;
        double test_dot;
        for (int i = 0; i < N; ++i) {
            int p, q;
            cin >> p >> q;
            test_sum.set(i, Fraction(p, q));
        }
        for (int i = 0; i < N; ++i) {
            int p, q;
            cin >> p >> q;
            test_sub.set(i, Fraction(p, q));
             
        }
        cin >> test_dot;
        if (equals(test_sum,(a + b)) && equals(test_sub,(a - b)) && (Fraction(test_dot, 1))==(a * b)) 
            cout << "Test (" << tests << ")" << "passed\n";
        else 
            cout << "Test (" << tests << ")" << "failed\n";
    }
    
    // vector<double> x = {1, 2, 3, 4, 5, 6}; // Чтобы на это не ругался компилятор -std=c++11
    // Vector v_x(x);
    // cout << "v_x = " << v_x << "\n";
    // vector<double> y = {-1, 0, -3, 5, 5}; // Чтобы на это не ругался компилятор -std=c++11
    // Vector v_y(y);
    // cout << "v_y = " << v_y << "\n";
    // Vector v_sum = v_x + v_y;
    // cout << "v_x + v_y = " << v_sum << "\n";
    return 0;
}