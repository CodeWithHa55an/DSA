#include<iostream>
using namespace std;
class Node{
    public:
   int data;
   Node* next;
   Node(int val){
    data = val;
    next = NULL;
   }
};
class Linked{
    public:
Node* head;
Linked(){
    head=NULL;
}
void pushback(int val){
Node* newNode = new Node(val);
if(head==NULL){
    head=newNode;
    return;
}
Node* temp = head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newNode;
}
void print(){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
};
int main(){
Linked ll;
ll.pushback(10);
ll.pushback(9);
ll.pushback(8);
ll.print();
return 0;
}
