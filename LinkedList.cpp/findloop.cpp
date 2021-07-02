//insert at head
//insert at tail
//display

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
int detectLoop(node *&head)
{
    node *slow_p = head;
    node *fast_p = head;
    while (slow_p && fast_p && fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p)
        {
            return 1;
        }
    }
    return 0;
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

    insertAtHead(head, 25);
    insertAtHead(head, 2);
    insertAtHead(head, 5);
    insertAtHead(head, 65);
    insertAtHead(head, 32);
    head->next->next->next->next->next = head;

    cout << detectLoop(head);

    // display(head);
}
