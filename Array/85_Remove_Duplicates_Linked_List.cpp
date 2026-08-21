/*
📝 Your mistakes for notes
pushback() — when head == NULL, set head = newNode; don't return without inserting.
display() — initialize temp with head: Node* temp = head;.
Empty-list check — use return after printing the empty-list message.
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
class Link{
    public:
    Node* head;
    Link(){
        head=NULL;
    }
    void pushback(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
           temp=temp->next; 
        }
        temp->next=newNode;
    }
    void removeduplicates(){
      if(head==NULL){
        cout << " linked list is empty " << endl;
        return;
      }
      Node* temp=head;
      while(temp!=NULL&&temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node* Duplicate = temp->next;
            temp->next=temp->next->next;
            delete Duplicate;
        }
        else{
            temp=temp->next;
        }
      }
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
    Link ll;
    ll.pushback(12);
    ll.pushback(13);
    ll.pushback(12);
    ll.pushback(14);
     ll.pushback(14);
    ll.pushback(15);
    ll.display();
    ll.removeduplicates();
    ll.display();
    return 0;
}