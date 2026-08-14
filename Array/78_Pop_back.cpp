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
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
      }
      void popBack(){
        if(head==NULL){
            cout << " Linked list is empty " << endl;
            return;
        }
       if(head->next==NULL){
         delete head;
         head = NULL;
         return;
       }
       Node* temp = head;
       while(temp->next->next!=NULL){
        temp=temp->next;
       }
       delete temp->next;
       temp->next=NULL;
      }
      void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp=temp->next;
        }
      }
};
int main(){
    Linked ll;
    ll.pushback(10);
    ll.pushback(11);
    ll.pushback(12);
    ll.print();
    ll.popBack();
    cout << endl;
    ll.print();
    return 0;
}