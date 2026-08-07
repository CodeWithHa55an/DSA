#include<iostream>
using namespace std;
int main(){
    int rows=3;
    int column=3;
    int **arr=new int*[rows];
    int sum=0;
    for(int i=0;i<rows;i++){
        arr[i]=new int [column];
    }
    cout << " Enter Array Elements " << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin >> arr[i][j];
            sum+=arr[i][j];
        }
    }
    cout << " Sum = : " << sum << endl;
    for(int i=0;i<rows;i++){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}