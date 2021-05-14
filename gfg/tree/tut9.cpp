// Height of a Binary Tree;

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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->left), height(root->right));
    }
}

// Time Complexity ->O(n)
// Auxiliary Space -> O(h)