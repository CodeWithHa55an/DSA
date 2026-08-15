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
    void Pushfront(int val){
        Node* newNode = new Node(val);
       newNode->next=head;
       head=newNode;
    }
    void popfront(){
        if(head==NULL){
            cout << " Linked list iis empty " << endl;
        }
        Node* temp=head;
        head = head->next;
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
  Linked ll;
  ll.Pushfront(11);
  cout << " Without Pop-Front " << endl;
  ll.display();
  cout << " With Pop-Front " << endl;
  ll.popfront();
  ll.display();
  return 0;
};