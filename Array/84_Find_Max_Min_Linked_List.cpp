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
    void findMaxMin(){
      if(head==NULL){
        cout << " Linked list is empty " << endl;
        return;
      }
      int max = head->data;
      int min = head->data;
      Node* temp = head;
      while(temp!=NULL){
        if(temp->data>max){
            max=temp->data;
        }
        if(temp->data<min){
            min=temp->data;
        }
        temp=temp->next;
      }
      cout << "Maximum = : " << max << endl;
      cout << "Minimum = : " << min << endl;
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
    ll.findMaxMin();
    ll.display();
    return 0;
}