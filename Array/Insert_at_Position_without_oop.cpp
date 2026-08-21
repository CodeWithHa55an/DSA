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

void insertAtPosition(Node*& head, int val, int position)
{
    if(position < 0)
    {
        cout << "Invalid position." << endl;
        return;
    }

    Node* newNode = new Node;

    newNode->data = val;

    // Insert at beginning
    if(position == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    for(int i = 0; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        cout << "Invalid position." << endl;
        delete newNode;
        return;
    }

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

    insertAtPosition(head, 30, 2);

    cout << "After Insertion: ";
    display(head);

    return 0;
}