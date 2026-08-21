#include<iostream>
using namespace std;
void push(int stack[],int& top , int size , int value){
    if(top==-1){
        cout << " Stack Overflow " << endl;
    }
    top++;
    stack[top]=value;
}
void peak(int stack[],int& top){
    if(top==-1){
        cout << " Stack Overflow " << endl;
    }
    cout << " Top = : " << stack[top] << endl;
}
int main(){
    int stack[5];
    int top=-1;
    push(stack,top,5,10);
    push(stack,top,5,20);
    push(stack,top,5,30);
    push(stack,top,5,40);
    peak(stack,top);
    return 0;
}