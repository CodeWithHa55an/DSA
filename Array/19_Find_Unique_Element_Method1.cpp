#include<iostream>
using namespace std;
int main(){
    int arr[7];
    cout << " Enter 7 elements " << endl;
    for(int i=0;i<7;i++){
        cin >> arr[i];
    }
    for(int i=0;i<5;i++){
        bool unique = true;
        for(int j=0;j<5;j++){
            if(i!=j&&arr[i]==arr[j]){
                unique==false;
                break;
            }
        }
        if(unique){
            cout << " Unique Element = : " << arr[i] << " ";
        }
    }
    return 0;
}