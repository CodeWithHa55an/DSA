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

void findMaxMin(Node* head)
{
    if(head == NULL)
    {
        cout << "Linked list is empty." << endl;
        return;
    }

    int maximum = head->data;
    int minimum = head->data;

    Node* temp = head;

    while(temp != NULL)
    {
        if(temp->data > maximum)
        {
            maximum = temp->data;
        }

        if(temp->data < minimum)
        {
            minimum = temp->data;
        }

        temp = temp->next;
    }

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum << endl;
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

    pushBack(head, 50);
    pushBack(head, 20);
    pushBack(head, 80);
    pushBack(head, 10);
    pushBack(head, 40);

    cout << "Linked List: ";
    display(head);

    findMaxMin(head);

    return 0;
}