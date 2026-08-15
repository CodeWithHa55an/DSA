#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data= val;
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
    head = newNode;
    return;
}
Node* temp = head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newNode;

    }
    void popback(){
        if(head->next==NULL){
            delete head;
            return;
        }
        Node* temp = head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    void popfront(){
         if(head==NULL){
            cout << " Linked list is empty " << endl;
            return;
        }
        Node *temp = head;
        head=head->next;
        delete temp;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp=temp->next;
        }
    }
};
int main(){
    list ll;
    ll.pushback(11);
    ll.pushback(12);
    ll.popfront();
    ll.display();
    return 0;
}