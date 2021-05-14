// BST Insert

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

//Recursive approach

Node *insert(Node *root, int x)
{
    if (root == NULL)
        return new Node(x);
    else if (root->key < x)
        root->right = insert(root->right, x);
    else if (root->key > x)
        root->left = insert(root->left, x);
    return root;
}

Node *insert(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL;
    Node *curr = root;
    while (curr != NULL)
    {
        parent = curr;
        if (curr->key > x)
            curr = curr->left;
        else if (curr->key < x)
            curr = curr->right;
        else
            return root;
    }
    if (parent == NULL)
    {
        return temp;
    }
    if (parent->key > x)
    {
        parent->left = temp;
    }
    else
    {
        parent->right = temp;
    }
    return root;
}


// time Complexity ->O(h)
// Auxiliary space ->O(h)