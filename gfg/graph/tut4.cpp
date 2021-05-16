// First Version ->Given an undirectded graph and a source vertex "s" print BFS from the given source
// First thier friends and then their friends and then freinds of friends

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void BFS(vector<int> adj[], int v, int s)
{
    bool visited[v + 1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

// Consider Another Version
// Not Given the source and the graph may be continued.
void BFS2(vector<int> adj[], int v, int s, bool visited[])
{
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] == true;
                q.push(v);
            }
        }
    }
}

void BFDDis(vector<int> adj[], int v)
{
    bool visited[v + 1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (visited[i] = false)
        {
            BFS2(adj, i, visited);
        }
    }
}
/*

int BFDDis(vector<int> adj[], int v)
{
    bool visited[v + 1];
    int count=0;
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (visited[i] = false)
        {
            BFS2(adj, i, visited);
            count++;
        }
    }
    return count;
}
*/


int main()
{

    return 0;
}

// Time Complexity -> O(v+e)