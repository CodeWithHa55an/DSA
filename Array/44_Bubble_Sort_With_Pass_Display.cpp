#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[5] = {3, 2 ,5,4,1};
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        printarray(arr,n);
        cout << endl;
    }
    return 0;
}
/*
1. Incorrect array declaration (`int arr[3,2,5,4,1]`); use `{}` to initialize the array.
2. Inner loop should be `j < n - i - 1` to avoid out-of-bounds access (`arr[j+1]`).
3. `printArray()` should be called after each pass, not after every swap.
4. Place `printArray()` outside the inner loop but inside the outer loop.
5. `printArray()` should have a `void` return type since it doesn't return any value.
*/