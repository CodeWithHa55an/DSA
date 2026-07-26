#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int r = 3;
    int c = 3;
    cout << " Enter elements of 2d array " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int smallest = arr[0][0];
    int largest = arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>largest){
                largest = arr[i][j];
            }
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<smallest){
                smallest = arr[i][j];
            }
        }
    }
    cout << " Largest = " << largest << endl;
    cout << " Smallest = " << smallest << endl;
    return 0;
}