//sorted

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
void removeDup(node *&head)
{
    node *current = head;
    node *next_next;

    if (current == NULL)
    {
        return;
    }
    while (current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        }
        else
        {
            current = current->next;
        }
    }
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
    insertAtHead(head, 2);
    insertAtHead(head, 5);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtHead(head, 8);

    removeDup(head);
    display(head);
}
