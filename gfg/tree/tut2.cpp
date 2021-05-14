// Binary Tree -> Every Node at most two children;
// can have at most two children 0 1 2;

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
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);

    // Node *root =NULL empty tree;
}