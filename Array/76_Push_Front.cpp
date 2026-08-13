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
 void pushfront(int val){
    Node* newNode = new Node(val);
    newNode->next=head;
    head=newNode;
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
    ll.pushfront(10);
    ll.pushfront(20);
    ll.pushfront(31);
    ll.display();
    return 0;
}