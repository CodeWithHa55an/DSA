/*
But you CAN use i + 5 here:
If you change the assignment to:
secondhalf[i] = arr[i + 5];
My idea i + 5 is also correct, but it should be used with arr, not secondhalf.
In short: i-5 changes the destination index; i+5 changes the source index.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[10],firsthalf[5],secondhalf[5];
    cout << " Enter 10 eleements " << endl;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=0;i<5;i++){
        firsthalf[i]=arr[i];
    }
    for(int i=5;i<10;i++){
        secondhalf[i-5]=arr[i];
    }
    cout << " First Half " << endl;
    for(int i=0;i<5;i++){
        cout << firsthalf[i] << " " << endl ;
    }
    cout << " Second Half " << endl;
    for(int i=0;i<5;i++){
        cout << secondhalf[i] << " " << endl;
    }
return 0;
}