// inteartive preorder transversal (space optimised solution);

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

// -> Create an empty stack;
// -> st.push(root);
// ->curr=root;
// ->while(its not empty)

/*
while(curr!=NULL){
    print(currs key);
    if(curr's right is not NULL{
        st.push(curr's right)
    }
    curr =curr->next;
}
curr = st.pop();
*/

void iterativePreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<Node *> st;
    Node *curr = root;
    while (curr != NULL || st.empty() == false)
    {
        while (curr != NULL)
        {
            cout << curr->key << " ";
        }
        if (curr->right != NULL)
        {
            st.push(curr->right);
        }
        curr = curr->left;
        if (st.empty() == false)
        {
            curr = st.top();
            st.pop();
        }
    }
}
 