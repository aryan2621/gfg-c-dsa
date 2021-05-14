// Max in the Binary tree;

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
struct Node
{
    int key;
    Node *right;
    Node *left;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int getMax(Node *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(root->key, max(getMax(root->left), getMax(root->right)));
    }
}

// Time Complexity-> O(n);
// Auxiliary Space->O(h);

// There is also a queue implmentation for tree;