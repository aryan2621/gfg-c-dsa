// Graph Adjacency list Representation in c++

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(4);
}
void printGraph(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int v = 4;
    vector<int> adj[v]; // 0 | 1 | 2
    addEdge(adj, 0, 1); // 1 | 0 | 2 | 3
    addEdge(adj, 0, 2); // 2 | 0 | 1
    addEdge(adj, 1, 2); // 3 | 1
    addEdge(adj, 1, 2); //
    printGraph(adj, v);
    return 0;
}