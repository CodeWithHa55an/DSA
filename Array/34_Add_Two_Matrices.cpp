#include<iostream>
using namespace std;
int main(){
    int matrix1[3][3],matrix2[3][3],result[3][3];
    int r = 3;
    int c = 3;
    cout << " Enter elements for Matrix 1 " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> matrix1[i][j];
        }
    }
    cout << " Enter elements for Matrix 2 " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> matrix2[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           result[i][j] = matrix1[i][j]+matrix2[i][j];
        }
    }
    cout << " Matrix 1 " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    cout << " Matrix 2 " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    cout << " Matrix After Addition " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}