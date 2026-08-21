#include<iostream>
using namespace std;
int main(){
    char stack[100];
    int top=-1;
    string str;
    cout << " Enter string " << endl;
    cin >> str;

    for(int i=0;i<str.length();i++){
    top++;
    stack[top] = str[i];
    }

    while(top!=-1){
        cout << stack[top];
        top--;
    }
    return 0;
}
