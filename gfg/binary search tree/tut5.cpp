// Delete in c++;

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

Node *getSuccess(Node *curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

Node *delNode(Node *root, int x)
{
    if (root == NULL)
        return root;
    else if (root->key > x)
        root->left = delNode(root->left, x);
    else if (root->key < x)
        root->right = delNode(root->right, x);
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *success = getSuccess(root);
            root->key = success->key;
            root->right = delNode(root->right, success->key);
        }
    }
    return root;
}