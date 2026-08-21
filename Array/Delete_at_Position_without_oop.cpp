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

void deleteAtPosition(Node*& head, int position)
{
    if(head == NULL)
    {
        cout << "Linked list is empty." << endl;
        return;
    }

    if(position < 0)
    {
        cout << "Invalid position." << endl;
        return;
    }

    // Delete first node
    if(position == 0)
    {
        Node* temp = head;

        head = head->next;

        delete temp;

        return;
    }

    Node* temp = head;

    for(int i = 0; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL)
    {
        cout << "Invalid position." << endl;
        return;
    }

    Node* deleteNode = temp->next;

    temp->next = deleteNode->next;

    delete deleteNode;
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
    pushBack(head, 40);

    cout << "Before Deletion: ";
    display(head);

    deleteAtPosition(head, 2);

    cout << "After Deletion: ";
    display(head);

    return 0;
}