#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }

    head = n;
}
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void deleteval(node *&head, int pos)
{
    node *temp = head;
    if (pos == 1)
    {
        head = temp->next;
        temp->next->prev = NULL;
        delete (temp);
    }
    else
    {
        int count = 0;
        while (temp != NULL && count != pos - 1)
        {
            temp = temp->next;
            count++;
        }
        temp->prev->next = temp->next;
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
        delete (temp);
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
    insertAtHead(head, 9);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtTail(head, 25);
    insertAtTail(head, 17);
    insertAtTail(head, 16);

    display(head);
    deleteval(head, 3);
    display(head);
    deleteval(head, 1);
    display(head);
}