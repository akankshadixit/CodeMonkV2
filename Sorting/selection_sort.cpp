/*

SELECTION SORT

The Selection sort algorithm is based on the idea of finding the minimum or maximum element
 in an unsorted array and then putting it in its correct position in a sorted array.

Time Complexity: The overall complexity of O(N2)

*/


#include <iostream>
using namespace std;


void selection_sort(int a[], int n)
{

  int mini, temp;

  for(int i =0;i<n;i++)
  {
      mini = i;
      for(int j = i+1;j<n;j++)
      {
          if(a[mini]>a[j])
          {
             mini = j;
          }
      }

       temp = a[mini];
          a[mini] = a[i];
          a[i] = temp;
  }


  for(int i =0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }

}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i =0;i<n;i++)
   {
       cin>>a[i];
   }

   selection_sort(a,n);
   return 0;

}
