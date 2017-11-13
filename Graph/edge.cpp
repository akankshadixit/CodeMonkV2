/*
GRAPH

You have been given an undirected graph consisting of N nodes and
M edges. This graph can consist of self-loops as well as multiple edges.
In addition , you have also been given Q queries. For each query,you shall be given 2 integers
A and B. You just need to find if there exists an edge between node
A and node B. If yes, print "YES" (without quotes) else , print "NO"(without quotes).
*/


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> v[10000];

int main()
{
int m,nodes,edges;
int a,b;
cin>>nodes>>edges;
for(int i=0;i<edges;i++)
{
cin>>a>>b;
v[a].push_back(b);
}

cin>>m;
int h=0;

for(int k=0;k<m;k++)
{
cin>>a>>b;
h=0;

for(int i=0;i<v[a].size();i++)
{
if(v[a][i]==b)
{
h=1;
break;
}
}

if(h==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}
