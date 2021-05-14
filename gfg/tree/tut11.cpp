// Iterative Implementatio of preorder

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

void iteratorPreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<Node *> st;
    st.push(root);
    while (st.empty() == false)
    {
        Node *curr = st.top();
        cout << curr->key << " ";
        st.pop();
        if (curr->right != NULL)
            st.push(curr->right);
        if (curr->left != NULL)
            st.push(curr->left);
    }
}