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
