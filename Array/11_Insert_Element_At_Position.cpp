
/*Problem Statement
Write a C++ program to insert a new element at a given position in an array.*/

#include<iostream>
using namespace std;
int main(){
    int arr[7];
    int size = 5;
    cout << " Enter 5 elements " << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int element,position;
    cout << " Enter element to insert " << endl;
    cin >> element;
    cout << " Enter position ( where to insert ) " << endl;
    cin >> position;

    for(int i=size;i>position;i--){
        arr[i]=arr[i-1];
    }
    arr[position]=element;
    size++;
    if(position < 0 || position > size){
        cout << " Invalid position " << endl;
        size--;
    }
    cout << " Updated Array " << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}