#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void push(Node*& top, int value){
    Node* newNode = new Node;
    newNode->data=value;
    newNode->next=top;
    top=newNode;
}
void pop(Node*& top){
    if(top==NULL){
        cout << " Stack Underflow " << endl;
        return;
    }
    Node* temp=top;
    cout << " Removed " << temp->data << endl;
    top=top->next;
    delete temp;
}
void display(Node* top){
    Node* temp = top;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}
int main(){
    Node* top=NULL;
    push(top,10);
    push(top,20);
    push(top,30);
    display(top);
    pop(top);
    cout << " After pop ";
    display(top);
    return 0;
}