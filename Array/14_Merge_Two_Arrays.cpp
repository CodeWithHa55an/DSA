
/*Problem Statement
Write a C++ program to merge two arrays into a single array.*/

#include<iostream>
using namespace std;
int main(){
    int arr1[5],arr2[5],merged[10];
    cout << " Enter 5 elements for Array 1 " << endl;
    for(int i=0;i<5;i++){
        cin >> arr1[i];
    }
    cout << " Enter 5 elements for Array 2 " << endl;
    for(int i=0;i<5;i++){
        cin >> arr2[i];
    }
for(int i=0;i<5;i++){
        merged[i] = arr1[i];
    }
    for(int i=0;i<5;i++){
        merged[i+5] = arr2[i];
    }
    cout << " Merged Array " << endl;
    for(int i=0;i<10;i++){
        cout << merged[i] << " ";
    }
return 0;
}