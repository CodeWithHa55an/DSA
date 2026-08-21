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

void peek(Node* top)
{
    if(top == NULL)
    {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Top = " << top->data << endl;
}

int main()
{
    Node* top = NULL;

    push(top, 10);
    push(top, 20);
    push(top, 30);

    peek(top);

    return 0;
}