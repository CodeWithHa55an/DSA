
/*Problem Statement
Write a C++ program to delete all occurrences of a given number from an array.*/

#include<iostream>
using namespace std;
int main(){
    int arr[7];
    int size = 5;
    cout << " Enter 5 Elements " << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int key;
    cout << " Enter key " << endl;
    cin >> key;
    for(int i=0;i<size;i++){
    if(arr[i]==key){
        for(int j=i;j<size-1;j++){
            arr[j]=arr[j+1];
        }
        size--;
        i--;
    }
    }
    if(size==0){
        cout << " Array is empty " << endl;
    }
    else{
        cout << " Updated Array " << endl;
        for(int i=0;i<size;i++){
            cout << arr[i] << " ";
        }
    }
    return 0;
}