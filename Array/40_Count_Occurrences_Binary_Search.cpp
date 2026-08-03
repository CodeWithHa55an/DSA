#include <iostream>
using namespace std;
int firstoccurence(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int answer = -1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            answer = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return answer;
}
int lastoccurence(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int answer = -1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            answer = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return answer;
}
int main(){
    int arr[] = {1, 2 , 2 , 3, 4 };
    int size = 5;
    int key;
    cout << " Enter key " << endl;
    cin >> key;
    int first = firstoccurence(arr,size,key);
    int last = firstoccurence(arr,size,key);
   if(first==-1){
    cout << " Element not found " << endl;
   }
   else{
    cout << " Occurence = " << last - first + 1;
   }
   return 0;
}