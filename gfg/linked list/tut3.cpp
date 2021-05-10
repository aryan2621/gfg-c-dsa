// task is that we have given the linked list with the head pointer
// task is to print out all the elements in the linked list untill null pointer
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

int main()
{

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    return 0;
}
void printList(Node *head)
{
    Node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}



// Question->  int main(){
/*
Node * head =new Node();
printhead(head);
printhead(head);

*/
// }


/*
void printhead(Node * head){
    |
    |
    |
    |
    |

}
*/


// it will print twice as in main we are passing by value that have copies of head so it deosnt modify the head