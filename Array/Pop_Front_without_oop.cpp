#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void pushBack(Node*& head, int val)
{
    Node* newNode = new Node;

    newNode->data = val;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void popFront(Node*& head)
{
    if(head == NULL)
    {
        cout << "Linked list is empty." << endl;
        return;
    }

    Node* temp = head;

    head = head->next;

    delete temp;
}

void display(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node* head = NULL;

    pushBack(head, 10);
    pushBack(head, 20);
    pushBack(head, 30);

    cout << "Before Pop Front: ";
    display(head);

    popFront(head);

    cout << "After Pop Front: ";
    display(head);

    return 0;
}