/*
2. Extended Euclidean Algorithm

This algorithm is an extended form of Euclid’s algorithm.

GCD(A,B) has a special property so that it can always be represented in the form of an equation i.e.

Ax+By=GCD(A,B).

The coefficients (x and y) of this equation will be used to find the modular multiplicative inverse. The coefficients can be zero, positive or negative in value.

This algorithm takes two inputs as A and B and returns GCD(A,B) and coefficients of the above equation as output.

*/


#include <iostream>
using namespace std;

int d, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

int main( ) {
extendedEuclid(16, 10);
cout << "The GCD of 16 and 10 is"  << d << endl;
cout << "Coefficients x and y are " << x <<  "and " << y << endl;
return 0;
}
