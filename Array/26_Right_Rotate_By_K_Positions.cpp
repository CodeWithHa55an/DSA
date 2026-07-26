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