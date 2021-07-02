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
void deleteAtpos(node *&head, int position)
{
    if (head == NULL)
    {
        cout << "empty ll";
        return;
    }
    node *temp = head;
    if (position == 0)
    {
        head = temp->next;
        free(head);
        return;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }
    node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
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
    deleteAtpos(head, 4);
    display(head);
}
