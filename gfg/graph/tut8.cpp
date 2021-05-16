// Detect Cyclic in an undirected Graph;

// It can happen that in the
// 1<--------->2
// according to our program it will be prove as the cyclic
// to avoid this we do the little changes

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// DFS Baesd solun
bool DFSRec(vector<int> adj[], int s, bool visited[], int parent)
{
    visited[s] = true;
    // for every adjacent of u of s
    if (visited[u] == false)
    {
        if (DFSRec(adj, u, visited, s) == true)
            return true;
        else if (u != parent)
            return true;
    }
    return false;
}

bool DFS(vector<int> adj[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < v; i++)
        if (visited[i] == false)
        {
            if (DFSRec(adj, i, visited, -1) == true);
            return true;
        }
    return false;
}

int main()
{
    int n;

    return 0;
}

// Time Complexity ->O(v+e)