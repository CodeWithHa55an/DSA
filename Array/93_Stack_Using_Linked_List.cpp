#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void push(Node*& top,int value){
    Node* newNode = new Node;
    newNode->data=value;
    newNode->next=top;
    top=newNode;
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
    Node* top = NULL;
    push(top,10);
    push(top,20);
    push(top,30);
    cout << " Stack " << endl;
    display(top);
    return 0;
}
