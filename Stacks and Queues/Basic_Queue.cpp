/*

BASIC QUEUE:

You have to perform N operations on a queue of the following types: 


E x : Enqueue x in the queue and print the new size of the queue.
D : Dequeue from the queue and print the element that is deleted and the new size of
 the queue separated by a space. If there is no element in the queue, then print −1 in place of the deleted element.

Enqueue operation: Print the new size of the queue
Dequeue operation: Print two integers, the deleted element and the new size of the queue.
If the queue is empty, print −1 and the new size of the queue.


*/



#include <iostream>
using namespace std;

int count = 0;
int front=0;
int rear=0;

void en(int queue[], int value)
{
    
    queue[rear] = value;
    rear++;
    count++;
    cout<<count<<endl;
    
}

void de(int queue[])
{
    if(front == rear)
    {
        cout<<"-1 "<<count<<endl;
    }
    
    else{
        count--;
        cout<<queue[front]<<" "<<count<<endl;
        queue[front]=0;
        front++;
    }
    
}

int main()
{
int n, x;
char ch;
cin>>n;
int a[n];
for(int i=1;i<=n;i++)
{
    cin>>ch;
    if(ch=='E')
    {
      cin>>x;
      en(a,x);
    }
    else if(ch=='D')
    {
      de(a);
    }

}
return 0;
}
