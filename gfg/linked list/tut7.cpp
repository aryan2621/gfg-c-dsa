// Insert at the end!!

// 10->20->30
// x=40
// 10->20-> 30-> 40

#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head, 30);
    head = insertEnd(head, 60);
    head = insertEnd(head, 70);
    return 0;
}