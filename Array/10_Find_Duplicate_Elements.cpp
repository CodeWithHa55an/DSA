
//Write a C++ program to find and print all duplicate elements in an array.

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << " Enter 5 elements " << endl;
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    cout << " Duplicate elements are " << endl;
    bool found = false;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                cout << arr[i] << endl;
                found = true;
            }
        }
    }
    if(!found){
        cout << " No duplicate elements found " << endl;
    }
    return 0;
}