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
int main(){
     Node* head = new Node(10);
     Node* second = new Node(20);
     Node* third = new Node(30);
     head->next=second;
     second->next=third;
     Node* temp = head;
     cout << " Linked Lists : " << endl;
     while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
     }
     delete head;
     delete second;
     delete third;
     return 0;
}