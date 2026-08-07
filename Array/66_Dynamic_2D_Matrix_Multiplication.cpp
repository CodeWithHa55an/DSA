#include<iostream>
using namespace std;
int main(){
    int r = 3;
    int c = 3;
    int **arr1 = new int*[r];
    int **arr2 = new int*[r];
    int **result = new int*[r];
    for(int i=0;i<r;i++){
        arr1[i] = new int[c];
    }
    for(int i=0;i<r;i++){
        arr2[i] = new int[c];
    }
    for(int i=0;i<r;i++){
        result[i] = new int[c];
    }
    cout << " Enter Matrix 1 Elements  " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr1[i][j];
        }
    }
    cout << " Enter Matrix 2 Elements  " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr2[i][j];
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
  cout << " Matrix 1 Elements  " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << " Matrix 2 Elements  " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr2[i][j] << " ";
        }
        cout << endl;
    }
 cout << " Result = : " << endl;
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout << result[i][j] << " ";
    }
    cout << endl;
 }
 for(int i=0;i<r;i++){
    delete[] arr1[i];
    delete[] arr2[i];
 delete[] result[i];
 }
 delete[] arr1;
 delete[] arr2;
 delete[] result;
 return 0;
}