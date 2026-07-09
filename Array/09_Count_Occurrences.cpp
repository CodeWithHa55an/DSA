/*📚 Problem 8: Count Occurrences of a Number

This is a natural progression from Linear Search. Instead of stopping at the first match, we'll count how many times the key appears.*/

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << " Enter 5 elements " << endl;
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    int count = 0;
    int key;
    cout << " Enter key to found " << endl;
    cin >> key;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            count++;
        }
    }
    if(count > 0){
        cout << " Element " << key << " occurs " << count << " time(s). " << endl;
    }
    else{
        cout << " Element not found " << endl;
    }
    return 0;
}