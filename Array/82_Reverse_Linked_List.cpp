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
class list{
    public:
    Node* head;
    list(){
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
   void reverse(){
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while(current!=NULL){
        next = current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
   }
   void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
   }
};
int main(){
    list ll;
    ll.pushback(1);
    ll.pushback(2);
    ll.pushback(3);
    ll.pushback(4);
    ll.pushback(5);
    ll.reverse();
    ll.display();
    return 0;
}