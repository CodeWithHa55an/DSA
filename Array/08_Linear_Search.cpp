#include<iostream>
using namespace std;
int main(){
    int arr[7];
    cout << " Enter 7 elements " << endl;
    for(int i=0;i<7;i++){
        cin >> arr[i];
    }
    int key;
    cout << " Enter key to find " << endl;
    cin >> key;
    bool found = false;
    for(int i=0;i<7;i++){
        if(arr[i]==key){
            cout << " Array found at index : " << i << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << " Element ot found." << endl;
    }
    return 0;
}