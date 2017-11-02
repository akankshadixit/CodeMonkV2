/*
INSERTION SORT
nsertion sort is based on the idea that one element from the input elements is consumed
in each iteration to find its correct position i.e, the position to which it belongs in a sorted array.

It iterates the input elements by growing the sorted array at each iteration. It compares the current element
with the largest value in the sorted array. If the current element is greater, then it leaves the element in its place and
moves on to the next element else it finds its correct position in the sorted array and moves it to that position.
This is done by shifting all the elements, which are larger than the current element, in the sorted array to one position ahead

Time Complexity:

In worst case,each element is compared with all the other elements in the sorted array. For N elements, there will be
N2 comparisons. Therefore, the time complexity is O(N2)
*/

#include <iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
    int temp;
    int j = 0;



/*storing current element whose left side is checked for its 
             correct position .*/

    for(int i =0;i<n;i++)
    {
        temp = a[i];
        j =i;

/* check whether the adjacent element in left side is greater or
            less than the current element. */

        while(j>0 && temp<a[j-1])
        {

// moving the left side element to one position forward.
            a[j] = a[j-1];
            j =j-1;
        }

 // moving current element to its  correct position.
        a[j] = temp;

    }


      for(int j =0;j<n;j++)
      {

          cout<<a[j]<<" ";
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

   insertion_sort(a,n);
    return 0;
}
