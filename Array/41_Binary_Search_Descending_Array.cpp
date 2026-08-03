#include<iostream>
using namespace std;
int main(){
int arr[5] = {50,40,30,20,10};
int start = 0;
int end = 4;
int key;
cout << " Enter key to found " << endl;
cin >> key;
int answer = -1;
bool found = false;
while(start<=end){
    int mid = (start+end)/2;
    if(arr[mid]==key){
       cout << " Found at index " << mid;
       found = true;
       break;
    }
    else if(arr[mid]>key){
        start = mid+1;
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