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

void insertMiddle(Node* head, int val)
{
    if(head == NULL)
    {
        cout << "Linked list is empty." << endl;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL && temp->next->next != NULL)
    {
        temp = temp->next;
    }

    Node* newNode = new Node;

    newNode->data = val;

    newNode->next = temp->next;

    temp->next = newNode;
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
    pushBack(head, 40);

    cout << "Before Insertion: ";
    display(head);

    insertMiddle(head, 30);

    cout << "After Insertion: ";
    display(head);

    return 0;
}