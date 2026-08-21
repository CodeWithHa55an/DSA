#include<iostream>
using namespace std;
int main(){
    int stack[5];
    int top=-1;

    //push
    top++;
    stack[top]=10;

    top++;
    stack[top]=20;

    top++;
    stack[top]=30;

    cout << " Stack " << endl;
    for(int i=top;i>=0;i--){
        cout << stack[i] << " ";
    }
    return 0;
}