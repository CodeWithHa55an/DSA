#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,5,3,1};
    int n=5;
    for(int i=0;i<n-1;i++){
        int smallestindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestindex]){
                smallestindex=j;
            }
        }
        swap(arr[i],arr[smallestindex]);
    }
    cout << " Sorted Array " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
