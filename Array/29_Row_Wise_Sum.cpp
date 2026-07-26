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

    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
         cout << " Sum of Row " << i+1 << " = " << sum << endl;
    }
    return 0;
}