/*
My 2 Mistakes
1. Used == instead of =
head == NULL only compares; head = NULL actually initializes head.
2. Forgot temp = temp->next in search
Without moving temp, the loop keeps checking the same node → infinite loop.
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
        head = newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
  }
  void searching(int key){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            cout << " Key Found " << endl;
            return;
        }
        temp=temp->next;
    }
    cout << " Element not found " << endl;
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
    ll.pushfront(11);
    ll.pushfront(12);
     ll.display();
     cout << endl;
    ll.searching(12);
    return 0;
}
