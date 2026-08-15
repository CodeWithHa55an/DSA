/*
📝 My Mistakes
Wrong condition in pushback() — used while(temp != NULL); should be while(temp->next != NULL) to stop at the last node.
Forgot return after invalid position — if(pos < 0) should stop the function.

Loop : for(int i = 0; i < position - 1 && temp != NULL; i++)

means:

"Keep moving temp toward the node before the desired position, but stop immediately if we reach the end of the linked list."
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
void insert(int val,int pos){
    if(pos<0){
        cout << " Invalid position " << endl;
        return;
    }
    if(pos==0){
   Node* newNode = new Node(val);
   newNode->next=head;
   head=newNode;
   return;
}
Node* temp=head;
for(int i=0;i<pos-1&&temp!=NULL;i++){
    temp=temp->next;
}
if(temp==NULL){
    cout << " Invalid position " << endl;
    return;
}
Node* newNode = new Node(val);
 newNode->next = temp->next;
 temp->next= newNode;
}
void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}
};
int main(){
    list ll;
    ll.pushback(12);
    ll.pushback(14);
    ll.pushback(15);
    ll.insert(13,1);
    ll.display();
    return 0;
}