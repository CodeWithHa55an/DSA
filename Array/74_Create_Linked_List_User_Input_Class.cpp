#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
    data=val;
    next = NULL;
    }
};
int main(){
    int n;
    cout << " Enter number of nodes " << endl;
    cin >> n;
    Node* head = NULL;
    Node* temp = NULL;
    for(int i=0;i<n;i++){
        int val;
        cout << " Enter data : " << endl;
        cin >> val;
     Node* newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        temp=newNode;
    }
    else{
        temp->next=newNode;
        temp=newNode;
    }
    }
    cout << " Linked List : " << endl;
    temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    return 0;
}
