#include<iostream>
using namespace std;
int main(){
    int num = 10;
    int *ptr = &num;
    cout << " through variable : " << num << endl;
    cout << " through pointer : " << *ptr << endl;
    return 0;
}