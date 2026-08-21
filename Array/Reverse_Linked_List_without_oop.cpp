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

void reverse(Node*& head)
{
    Node* prev = NULL;
    Node* current = head;

    while(current != NULL)
    {
        Node* next = current->next;

        current->next = prev;

        prev = current;

        current = next;
    }

    head = prev;
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

    cout << "Original List: ";
    display(head);

    reverse(head);

    cout << "Reversed List: ";
    display(head);

    return 0;
}