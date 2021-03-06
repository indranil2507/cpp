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
int lengthRec(node *&head)
{
    if (head == NULL)
    {
        return 0;
    }
    // Count this node plus the rest of the list
    else
    {
        return 1 + lengthRec(head->next);
    }
}
void length(node *&head)
{

    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << count << endl;
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
    length(head);
    cout << lengthRec(head);
    // display(head);
}
