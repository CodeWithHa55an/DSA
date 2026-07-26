#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int r = 3;
    int c = 3;
    int transpose[r][c];
    cout << " Enter elements of 2d array " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transpose[j][i] = arr[i][j];
        }
    }
    cout << " Orignal Matrix " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << " Transposed Matrix " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
     return 0;
}