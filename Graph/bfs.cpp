/*
 Breadth First Search(BFS)

here are many ways to traverse graphs. BFS is the most commonly used approach.

BFS is a traversing algorithm where you should start traversing from a selected 
node (source or starting node) and traverse the graph layerwise thus exploring
 the neighbour nodes (nodes which are directly connected to source node). You must
 then move towards the next-level neighbour nodes.

As the name BFS suggests, you are required to traverse the graph breadthwise as follows:

1. First move horizontally and visit all the nodes of the current layer
2. Move to the next layer

*/



#include<iostream>
#include<stdio.h>
#include<queue>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b;
    queue<int> q;
    int p;
    vector<int> v[100000<<1];

    for(int i =0; i<n-1;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    q.push(1);


    map<int,int>visited;

visited[1]=1;
while(!q.empty())
{

  p=q.front();
  q.pop();

  for(int i= 0;i < v[p].size(); i++)
    {
        if(visited[v[p][i]]==0)
        {
           visited[v[p][i]]=visited[p]+1;
           q.push(v[p][i]);

        }
    }

}

int count = 0;
int x;
cin>>x;

for(int i =1; i<=n;i++)
{
    if(visited[i] == x)
    count++;
}

cout<<count;

}

