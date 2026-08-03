#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << " Sorted Array " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}