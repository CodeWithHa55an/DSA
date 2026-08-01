#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int key;
    cout << "Enter key to find ";
    cin>>key;
    int start=0;
    int end=4;
    bool found = false;
    while(start<end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            cout << " Element found at index " << mid;
            found = true;
            break;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(!found){
        cout << " Element not found " << endl;
    }
    return 0;
}