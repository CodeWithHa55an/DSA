#include<iostream>
using namespace std;
void push(int stack[],int& top,int size,int value){
    if(top==-1){
        cout << " Stack Overflow " << endl;
    }
    top++;
    stack[top]=value;
}
void pop(int stack[],int &top){
    if(top==-1){
        cout << " Stack Overflow " << endl;
    }
    cout << " Removed : " << stack[top] << endl;
    top--;
}
int main(){
    int stack[5];
    int top = -1;
    push(stack,top,5,10);
    push(stack,top,5,20);
    push(stack,top,5,30);
    pop(stack,top);
    cout << " Stack " << endl;
    for(int i=top;i>=0;i--){
        cout << stack[i] << " ";
    }
    return 0;
}