//insert at head
//insert at tail
//display

#include <iostream>
#include <bits/stdc++.h>
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
bool isPallindrome(node *&head)
{
    node *temp = head;
    stack<int> s;

    while (temp != NULL)
    {
        s.push(temp->data);
        temp = temp->next;
    }
    while (head != NULL)
    {
        int i = s.top();
        s.pop();
        if (head->data != i)
        {
            return false;
        }
        head = head->next;
    }
    return true;
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
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    // head->next->next->next->next->next = head;

    cout << isPallindrome(head) << endl;

    // display(head);
}
