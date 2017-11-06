/*
3. Problem

You are given four integers, namely A, B, C, and M. The GCD of C and M is 1.

Write a program to find the value of the following expression:

((A^B)/C)%M

*/


#include <iostream>
using namespace std;

int d, x, y;

long long int modularExponentiation(int x, int n, int m)
{
  long long int result = 1;
  while(n>0)
  {
    if(n%2 == 1)
    result = (result*x)%m;
    x = (x*x)%m;
    n =n/2;
  }

  return result;

}

void extendedEuclid(long long int A, long long int B) {
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

long long int modInverse(long long int c,long long  int m)
{
 extendedEuclid(c,m);
 return (x%m+m)%m;
}

int main()
{
long long int a,b,c,m,ans1, ans2;
cin>>a>>b>>c>>m;       //2 3 4 5
ans1 = modularExponentiation(a,b,m);
ans2 = modInverse(c,m);
cout<<((ans1%m)*(ans2%m))%m;
return 0;

}
