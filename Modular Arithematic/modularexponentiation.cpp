/*
1. Modular Exponentiation:

Exponentiation is a mathematical operation that is expressed as x^n = x*x*x....x(n times)

While calculating x^n the basis of Binary Exponentiation relies on whether n is odd or even.

Ifn is even, replace x^n by (x^2)^n/2

If n is odd, replace x^n by x* x^n-1. n-1 becomes even and you can apply the relevant formula.

*/


#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


//binary exponentiation using recursion

int binaryExponentiation(int x, int n)
{
   if(n==0)
   return 1;

   else if(n%2 == 0)
   return binaryExponentiation(x*x,n/2);

   else
   return x*binaryExponentiation(x*x, (n-1)/2);

}


//binary exponentiation using iterative process

int binaryIterativeExponentiation(int x, int n)
{
int result = 1;

while(n>0)
{
  if(n % 2 == 1)
  result = result* x;

  x = x*x;
  n = n/2;
}

return result;

}

/*storing answers that are too large for their respective datatypes is an issue with this method. In some languages
the answer will exceed the range of the datatype while in other languages it will timeout due to large number multiplications.
In such instances, you must use modulus (%). Instead of finding x^n, you must find (xn) % m

*/

int modularExponentiation(int x, int n, int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}

int modulariterativeExponentiation(int x, int n , int M)
{
  int result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result * x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}


int main()
{
int res_binaryexpo;
int res_modular;

res_binaryexpo = binaryExponentiation(3,10);
cout<<"The result of binary exponentiation is: "<<res_binaryexpo<<endl;
res_modular = modularExponentiation(2,10,9);
cout<<"The result of modular exponentiation is: "<<res_modular<<endl;

return 0;
}

