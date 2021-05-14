// Size of the tree;


#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

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

int getSize(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + getSize(root->left) + getSize(root->right);
    }
}
// Time Complexity-> O(n);
// Auxiliary Space  -> O(h);