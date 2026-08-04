#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[5]={2,4,5,3,1};
    int n = 5;
    for(int i=0;i<n-1;i++){
        int smallestindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestindex]){
                smallestindex=j;
            }
        }
        swap(arr[i],arr[smallestindex]);
         cout << " Pass " << i+1 << " : ";
        printarray(arr,n);
        cout << endl;
    }
    return 0;
}