#include<iostream>
using namespace std;
void push(int stack[],int& top , int size , int value){
    if(top==-1){
    cout << " Stack is empty " << endl;
    }
    top++;
    stack[top]=value;
}
void display(int stack[],int top){
   if(top==-1){
    cout << " Stack is empty " << endl;
   }
    cout << " Stack " << endl;
    for(int i=top;i>=0;i--){
        cout << stack[i] << " ";
    }
    cout << endl;
}
int main(){
    int stack[5];
    int top=-1;
    push(stack,top,5,10);
    push(stack,top,5,20);
    push(stack,top,5,30);
    display(stack,top);
    return 0;
}