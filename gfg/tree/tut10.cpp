// iterartive inorder traversal:

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

void iterativeInorder(Node *root)
{
    stack<Node *> st;
    Node *curr = root;
    while (curr != NULL || st.empty() == false)
    {
        while (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->key << " ";
        curr = curr->right;
    }
}
// time Complexity->theta n;
// Auxiliary space-> big(h)
