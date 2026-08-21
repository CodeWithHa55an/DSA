#include<iostream>
using namespace std;
void pushback(int stack[],int& top , int size , int value){
    if(top==-1){
        cout << " Stack overflow " << endl;
    }
    top++;
    stack[top]=value;
}
int main(){
    int stack[5];
    int top =-1;
    pushback(stack,top,5,10);
    pushback(stack,top,5,20);
    pushback(stack,top,5,30);
    pushback(stack,top,5,40);
    cout << " Stack " << endl;
    for(int i=top;i>=0;i--){
        cout << stack[i] << " ";
    }
 return 0;
}