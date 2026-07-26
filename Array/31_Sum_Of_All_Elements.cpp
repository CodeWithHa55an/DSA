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
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    cout << " Sum of all Elements = " << sum << endl;
    return 0;
}