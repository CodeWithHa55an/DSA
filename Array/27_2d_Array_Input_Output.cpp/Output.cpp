#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    int rows = 3;
    int columns = 4;
    cout << " Enter 2d Array Elements " << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin >> arr[i][j];
        }
    }
    cout << " Array Elements are : " << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}