/*
📝 Purpose of k % 5

k % 5 keeps the rotation count within the array size.

Rotating an array 5 times brings it back to its original order.
So rotating 7 times is the same as rotating 2 times.
k % 5 gives only the extra rotations needed.

Example: 7 % 5 = 2

👉 In short: k % 5 avoids unnecessary rotations by removing complete rounds of rotation.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << " Enter 5 elements " << endl;
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    int k;
    cout << " Enter positions to rotate " << endl;
    cin >> k;
    k=k%5;
    for(int j=0;j<k;j++){
        int last =arr[4];
        for(int i=4;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=last;
    }
    cout << k <<  " Times Rotated Array : " << endl;
for(int i=0;i<5;i++){
    cout<<arr[i] << " ";
}
return 0;
}