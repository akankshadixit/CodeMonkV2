/*
A modified version of Stack. Here is the question from CodeMonk:

1) Customer Query:
When a customer demands a package, the food package on the top of the pile is given and the customer is charged according to the cost of the package.
This reduces the height of the pile by 1.
In case the pile is empty, the customer goes away empty-handed.

2) Chef Query:
The chef prepares a food package and adds it on top of the pile. And reports the cost of the package to the Manager.
Help him manage the process.

Input:
First line contains an integer Q, the number of queries. Q lines follow.
A Type-1 ( Customer) Query, is indicated by a single integer 1 in the line.
A Type-2 ( Chef) Query, is indicated by two space separated integers 2 and C (cost of the package prepared) .

Output:
For each Type-1 Query, output the price that customer has to pay i.e. cost of the package given to the customer in a new line.
If the pile is empty, print "No Food" (without the quotes).

*/

#include <iostream>
using namespace std;

int top =0;

void push(int stack[],int cost)
{

        top = top + 1;
        stack[top] = cost;

}

void pop()
{
    top = top -1;
}

int main()
{
    int query;
    cin>>query;
    int type, cost;
    int stack[query];



    for(int i =0;i<query;i++)
    {
        cin>>type;
        if(type == 1)
        {
            if(top == 0)
            {
               cout<<"No Food"<<endl;
            }

            else
            {
                cout<<stack[top]<<endl;
                pop();
            }



        }

        else if(type == 2)
        {
            cin>>cost;
            push(stack,cost);
        }

    }
    return 0;
}
