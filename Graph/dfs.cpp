/*
Depth First Search(DFS)

The DFS algorithm is a recursive algorithm that uses
the idea of backtracking. It involves exhaustive searches of
all the nodes by going ahead, if possible, else by backtracking.

Problem: You have been given a graph consisting of N nodes and
M edges. The nodes in this graph are enumerated from 1 to N .
The graph can consist of self-loops as well as multiple edges.
This graph consists of a special node called the head node.
You need to consider this and the entry point of this graph.
You need to find and print the number of nodes that are unreachable from this he

*/


#include<iostream>
#include<vector>

using namespace std;

bool visited[100000<<1] = {false};
vector<int> adj[100000<<1];
int count = 0;
void dfs(int s)
{
        count++;
        visited[s] = true;

        for(int i = 0;i < adj[s].size();++i)
        {
         if(visited[adj[s][i]] == false)
             dfs(adj[s][i]);
        }
    }

int main()
{
    int nodes, edges, connectedComponents = 0;

    int x,y;

    cin>>nodes>>edges;

    for(int i = 0;i < edges;++i) {
         cin >> x >> y;

         adj[x].push_back(y);                   //Edge from vertex x to vertex y
         adj[y].push_back(x);                   //Edge from vertex y to vertex x
        }


    int head;
    cin>>head;
    dfs(head);

    cout<<nodes-count;
    return 0;
}


