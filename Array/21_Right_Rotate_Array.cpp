#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << " Enter 5 elements " << endl;
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    int last = arr[4];
    for(int i=4;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0] = last;
    cout << " Rotated Array " << endl;
    for(int i=0;i<5;i++){
        cout<<arr[i] << " ";
    }
    return 0;
}
/*
1. Store the last element.
2. Shift all elements one position to the right.
3. Place the stored last element at index 0.
4. Print the updated array.
*/