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
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout << " Count = : " << count << endl;
    delete head;
    delete second;
    delete third;
return 0;


}