/*
Consider a number x that we need to check for being a power for 2. Now think about the binary representation of (x-1).
(x-1) will have all the bits same as x, except for the rightmost 1 in x and all the bits to the right of the rightmost 1.
Let,
x = 4 = (100)2
x - 1 = 3 = (011)2

x & (x-1) = 4 & 3 = (100)2 & (011)2 = (000)2

Properties for numbers which are powers of 2, is that they have one and only one bit set in their binary representation.
If the number is neither zero nor a power of two, it will have 1 in more than one place. So if x is a power of 2 then x & (x-1) will be 0.


*/



#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
 int x ;
 bool a;
 cout<<"Enter the number"<<"\n";
 cin>>x;
 a =  x && (!( x & (x-1)));         // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not


 if(a)
 cout<<"The number is a power of 2"<<endl;
 else
 cout<<"The number is not a power of 2"<<endl;

 return 0;

}


