#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return (prevptr);
}
node *recursiverev(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = recursiverev(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;

    insertAtHead(head, 1);
    insertAtHead(head, 9);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    insertAtHead(head, 7);
    insertAtHead(head, 6);
    ;
    display(head);
    node *newhead = reverse(head);
    display(newhead);
}