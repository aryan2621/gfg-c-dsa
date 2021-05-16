// Depth First Search

// Firstly we move to a memvber and
// we do traversl to the whole chain.
// and we make sure of being visited
// and as well as if the memebers are being connected in cyclic manner

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Connected graph
void DFRSec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << " ";
    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            DFRSec(adj, u, visited);
        }
    }
}
void DFS(vector<int> adj[], int v, int s)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    DFRSec(adj, s, visited);
}


// Disconnected Graph
void DFSRec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << " ";
    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            DFRSec(adj, u, visited);
        }
    }
}
void DFS2(vector<int> adj[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            DFSRec(adj, i, visited);
        }
    }
}
// Count Connected component in an undirected graph;

/*
int DFS2(vector<int> adj[], int v)
{
    bool visited[v];
    int count=0;
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            DFSRec(adj, i, visited);
            count++;
        }
    }
    return count;
}*/

int main()
{

    return 0;
}

// Time Complexity-> O(v+E);
