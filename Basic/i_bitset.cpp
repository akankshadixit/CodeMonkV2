/*
  Check if the ith bit is set in the binary form of the given number

  Let’s say we have a number N, and to check whether it’s ith bit is set or not, we can AND it with the number 2i


Let’s say N = 20 = {10100}2. Now let’s check if it’s 2nd bit is set or not(starting from 0). For that, we have to AND it with 22 = 1<<2 = {100}2 .
{10100} & {100} = {100} = 22 = 4(non-zero number), which means it’s 2nd bit is set.


*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
  int x, n;
  cout<<"Enter the number"<<endl;
  cin>>x;
  cout<<"Enter the position"<<endl;
  cin>>n;
  if(x & (1<<n))
  cout<<"The bit is set at position: "<<n<<endl;
  else
  cout<<"The bit is not set at position: "<<n<<endl;
}
