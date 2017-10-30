/*

As in x-1, the rightmost 1 and bits right to it are flipped, then by performing x&(x-1), 
and storing it in x, will reduce x to a number containing number of ones(in its binary form) less than the previous state of x, 
thus increasing the value of count in each iteration.

Example:
n = 23 = {10111}2 .
1. Initially, count = 0. 
2. Now, n will change to n&(n-1). As n-1 = 22 = {10110}2 , then n&(n-1) will be {101112 & {10110}2, which will be {10110}2 which is equal to 22. Therefore n will change to 22 and count to 1.
3. As n-1 = 21 = {10101}2 , then n&(n-1) will be {10110}2 & {10101}2, which will be {10100}2 which is equal to 20. Therefore n will change to 20 and count to 2.
4. As n-1 = 19 = {10011}2 , then n&(n-1) will be {10100}2 & {10011}2, which will be {10000}2 which is equal to 16. Therefore n will change to 16 and count to 3.
5. As n-1 = 15 = {01111}2 , then n&(n-1) will be {10000}2 & {01111}2, which will be {00000}2 which is equal to 0. Therefore n will change to 0 and count to 4.
6. As n = 0, the the loop will terminate and gives the result as 4.

Complexity: O(K), where K is the number of ones present in the binary form of the given number.
*/

#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
   int count ;
   int T, N;
   cin>>T;

   for(int i = 0;i<T; i++)
   {
    cin>>N;
    count =0;

   while(N)
   {
       N = N & (N-1);
       count++ ;
   }
   cout<<count<<"\n";
   }

    return 0;
}
