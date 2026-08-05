#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,4,5,3,1};
    int n=5;
    for(int i=1;i<n;i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current;
    }
    cout << " Sorted Array " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}