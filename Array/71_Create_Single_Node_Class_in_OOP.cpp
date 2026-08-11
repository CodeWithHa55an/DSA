#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
int main(){
    Node* head = new Node(10);
    cout << " Data = : " << head->data;
delete head;
return 0;
}
