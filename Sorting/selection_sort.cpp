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

  int mini;
  int temp;      // temporary variable to store the position of minimum element

  for(int i =0;i<n;i++)      // reduces the effective size of the array by one in  each iteration.

  {
      mini = i;              // assuming the first element to be the minimum of the unsorted array .

 // gives the effective size of the unsorted  array .
      for(int j = i+1;j<n;j++)
      {
          if(a[mini]>a[j])
          {
             mini = j;           //finds the minimum element
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
