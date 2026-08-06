#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{0,1,2},{3,4,5},{6,7,8}};
    int rows=3;
    int column=3;
cout << " 2d array :  " << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cout << *(*(arr+i)+j) << " ";
        }
    }
    return 0;
}