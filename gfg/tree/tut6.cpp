//Implementation of Postorder traversal

#include <iostream>
#include <bits/stdc++.h>

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

void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

// Time Complexity -> O(n);
// Auxiliary Space -> O(h)