#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void pushFront(Node*& head, int val)
{
    Node* newNode = new Node;

    newNode->data = val;
    newNode->next = head;

    head = newNode;
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

    pushFront(head, 10);
    pushFront(head, 20);
    pushFront(head, 30);

    cout << "Linked List: ";
    display(head);

    return 0;
}