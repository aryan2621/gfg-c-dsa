//Recursive Search in BST;

#include <iostream>
#include <bits/stdc++.h>

struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

bool search(Node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->key == x)
    {
        return true;
    }
    else if (root->key > x)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}

// Iterative approach

bool search(Node *root, int y)
{
    while (root != NULL)
    {
        if (root->key == y)
        {
            return true;
        }
        else if (root->key < y)
            root = root->right;
        else
            root = root->left;
    }
    return false;
}

// Time Complexity->O(h)  h=height
// Auxiliary Space(Recursive)->O(h)
// Auxiliary space (Iterative)-> O(1)