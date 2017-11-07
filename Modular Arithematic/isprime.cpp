/*
PRIME NUMBERS:

A better approach to find if a given number is a given number is a prime.
If you have two positive numbers N and D such that N is divisible by D and
D is less than the square root of N.


* (N/D) must be greater than the square root of N.
* N is also divisible by (N/D).. If there is a divisor of N that is less than the square root of N,
 then there will be a divisor of N that is greater than square root of N.You will have to traverse
 till the square root of N.

*/


#include <iostream>
using namespace std;

void checkprime(int n)
{
 int count = 0;
 for(int i = 1; (i*i) <= n; ++i)
 {
   if((n%i) == 1)
   {
     if((i*i) == n)
       count++;
     else
        count += 2;

   }
 }

 if(count == 2)
 cout << n << " is a prime number." << endl;
 else
 cout << n << "is not a prime number." << endl;
}


/*

Sieve of Eratosthenes:

You can use the Sieve of Eratosthenes to find all the prime numbers that are less than
or equal to a given number N or to find out whether a number is a prime number.

The basic idea behind the Sieve of Eratosthenes is that at each iteration one prime number
is picked up and all its multiples are eliminated. After the elimination process is complete,
all the unmarked numbers that remain are prime.S

*/

void seive(int n)
{
  bool isprime[n+1];

  for(int i = 0;i<=n; ++i)
  {
    isprime[i] = true;
  }

   isprime[0] = false;
   isprime[1] = false;


   int count = 0;
   for(int i = 2 ; (i*i) <= n;++i)
   {
     if(isprime[i]== true)
     {
       for(int j = i*i ; j <= n; j+= i)
       {
         isprime[j] = false;
       }

     }

   }

   for(int i = 0;i<n;i++)
    {
        if(isprime[i] == true)
        count++;
    }

cout<< "The number of prime digits between 0 and "<<n <<" are : "<<count<<endl;

}


int main()
{

checkprime(10);
seive(10);

return 0;

}
