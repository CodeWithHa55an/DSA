#include<iostream>
#include<string>
using namespace std;
struct Node{
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
        return '\0';
    }
    Node* temp =top;
    char value = temp->data;
    top=top->next;
    delete temp;
    return value;
}
bool isMatching(char open , char close){
    if(open=='('&&close==')')
        return true;
    if(open=='['&&close==']')
    return true;
    if(open=='{'&&close=='}')
    return true;

    return false;
}
bool isbalanced(string str){
    Node* top = NULL;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='('||ch=='['||ch=='{'){
            push(top,ch);
        }
        else if(ch==')'||ch==']'||ch=='}'){
            if(top==NULL){
                return false;
            }
            char open = pop(top);
             if(!isMatching(open, ch))
            {
                return false;
            }
        }
    }

    if(top == NULL)
        return true;

    return false;
}

int main()
{
    string str;

    cout << "Enter brackets: ";
    cin >> str;

    if(isbalanced(str))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}