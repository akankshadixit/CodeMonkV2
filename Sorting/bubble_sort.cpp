/*
BUBBLE SORT

Bubble sort is based on the idea of repeatedly comparing pairs of adjacent elements and
then swapping their positions if they exist in the wrong order.

Complexity:
The complexity of bubble sort is
O
(
n
2
)
O(n2) in both worst and average cases, because the entire array needs to be iterated for every element.

*/

#include<iostream>
#include<string>

using namespace std;

void bubble_sort(int a[], int n)
{
    int temp = 0;
    int count =0;

    for(int k=0;k<n-1;k++)
    {
        for(int i =0;i<n-k-1;i++) // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations
        {
            if(a[i]>a[i+1])
            {
                temp   = a[i];
                a[i]   = a[i+1];
                a[i+1] = temp;
                count++;
            }

        }
    }
    cout<<count<<endl;
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

    bubble_sort(a,n);
    return 0;
}
