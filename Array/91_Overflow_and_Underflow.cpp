#include<iostream>
using namespace std;
void push(int stack[],int& top,int size,int value){
    if(top=size-1){
        cout << " Stack overflow " << endl;
        return;
    }
    top++;
    stack[top]=value;
}
void pop(int stack[],int& top){
    if(top==-1){
        cout << " Stack underflow " << endl;
    }
    cout << " Removed " << stack[top] << endl;
    top--;
}
int main(){
    int stack[3];
    
}