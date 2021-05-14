// implementation of inorder  transversal

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


void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << (root->key) << " ";
        inorder(root->right);
    }
}

// Time Complexity -> O(n);
// Auxiliary Space -> O(h)