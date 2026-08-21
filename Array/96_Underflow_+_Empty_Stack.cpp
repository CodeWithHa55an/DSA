#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void push(Node*& top, int value)
{
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = top;

    top = newNode;
}

void pop(Node*& top)
{
    if(top == NULL)
    {
        cout << "Stack Underflow." << endl;
        return;
    }

    Node* temp = top;

    cout << "Removed: " << temp->data << endl;

    top = top->next;

    delete temp;
}

int main()
{
    Node* top = NULL;

    pop(top);

    push(top, 10);
    push(top, 20);

    pop(top);
    pop(top);

    pop(top);

    return 0;
}