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
void deleteRecursive(node *&head, int val)
{
    if (head == NULL)
    {
        cout << "element not there";
        return;
    }
    if (head->data == val)
    {
        node *t = head;
        head = head->next;
        delete t;
        return;
    }
    deleteRecursive(head->next, val);
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

    display(head);
    deleteRecursive(head, 32);
    display(head);
}
