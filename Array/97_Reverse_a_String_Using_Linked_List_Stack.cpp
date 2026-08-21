/*
Toh pop() exactly kya kar raha hai?

pop():
Top element ki value save karta hai → top ko next node par move karta hai → purane top node ko delete karta hai → saved value return karta hai.
*/
#include<iostream>
using namespace std;
struct Node
{
   char data;
   Node* next;
};
void push(Node*& top,char value){
    Node* newNode = new Node;
    newNode->data=value;
    newNode->next=top;
    top=newNode;
}
char pop(Node*& top){
    if(top==NULL){
        return '/n';
    }
    Node* temp = top;
    char value = temp->data;
    top=top->next;
    delete temp;
    return value;
}
int main(){
    Node* top = NULL;
    string str;
    cout << " Enter string " << endl;
    cin >> str;
    for(int i=0;i<str.length();i++){
        push(top,str[i]);
    }
    cout << " Reversed " << endl;
    while(top!=NULL){
        cout << pop(top);
    }
    return 0;
}

