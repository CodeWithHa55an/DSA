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

void search(Node* head, int key)
{
    Node* temp = head;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            cout << "Element found." << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "Element not found." << endl;
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

    cout << "Linked List: ";
    display(head);

    int key;

    cout << "Enter element to search: ";
    cin >> key;

    search(head, key);

    return 0;
}