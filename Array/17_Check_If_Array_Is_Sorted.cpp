#include<iostream>
using namespace std;
int main(){
    int arr[7];
    cout << "  Enter 7 elements " << endl;
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    bool sorted = true;
    for(int i=0;i<7;i++){
        if(arr[i]>arr[i+1]){
            sorted = false;
            break;
        }
    }
    if(sorted){
        cout << " Array is Sorted " << endl;
    }
    else{
        cout << " Array is not sorted " << endl;
    }
    return 0;
}
