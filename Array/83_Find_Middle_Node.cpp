/*
Slow and Fast Pointer Technique
Slow and Fast Pointer (Tortoise and Hare) Technique:
Two pointers are used where slow moves one step and fast moves two steps. It is commonly used to find the middle of a linked list, detect cycles, etc.
*/
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
    void pushfront(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }
    void Middle(){
    if(head==NULL){
        cout << " Linked list is empty " << endl;
        return;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout << " Middle Node = " << slow->data << endl;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp=temp->next;
        }
        cout << endl;
    }
};
int main(){
    list ll;
    ll.pushfront(5);
    ll.pushfront(4);
    ll.pushfront(3);
    ll.pushfront(3);
    ll.pushfront(1);
    ll.Middle();
    ll.display();
    return 0;
}