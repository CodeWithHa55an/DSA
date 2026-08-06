#include<iostream>
using namespace std;
int main(){
    int num = 10;
    int *ptr = &num;
    cout << " Value = : " << num << endl;
    cout << " Address = : " << &num << endl;
    cout << " Pointer stores " << ptr << endl;
    return 0;
}