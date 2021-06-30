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
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
bool linear(node *&head, int val)
{
    node *temp = head;
    while (temp != NULL)
    {
        // cout << temp->data << endl;
        if (temp->data == val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main()
{
    node *head = NULL;
    int n, m;
    // insertAtHead(head, 25);
    // insertAtHead(head, 2);
    // insertAtHead(head, 5);
    // insertAtTail(head, 65);
    // insertAtTail(head, 32);
    cout << "inserting at head";
    cin >> n;
    cout << "inserting at tail";
    cin >> m;
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insertAtHead(head, val);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        insertAtTail(head, val);
    }
    display(head);
    cout << linear(head, 25);
}
