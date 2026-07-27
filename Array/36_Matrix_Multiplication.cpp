#include<iostream>
using namespace std;
int main(){
    int arr1[3][3],arr2[3][3];
    int r=3;
    int c=3;
    int result[r][c];
    cout << " Enter Matrix 1 Elements " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> arr1[i][j];
        }
    }
    cout << " Enter Matrix 2 Elements " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> arr2[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            result[i][j]=0;
            for(int k=0;k<c;k++){
                result[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
     cout << " Matrix 1 Elements " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << " Matrix 2 Elements " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << " Matrix after Multiplication " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
k	Matrix A (arr1[1][k])	Matrix B (arr2[k][2])	Product
0	arr1[1][0]	arr2[0][2]	First multiplication
1	arr1[1][1]	arr2[1][2]	Second multiplication
2	arr1[1][2]	arr2[2][2]	Third multiplication
*/