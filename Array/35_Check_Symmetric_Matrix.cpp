#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int r=3;
    int c=3;
    cout << " Enter array Elements " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> arr[i][j];
        }
    }
    bool symetric = true;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]!=arr[j][i]){
symetric=false;
break;
            }
        }
        if(!symetric){
            break;
        }
    }
    int transpose[r][c];
    cout << " Orignal Matrix " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transpose[i][j]=arr[j][i];
        }
    }
    cout << " Transposed Matrix " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    if(symetric){
        cout << " Matrix is symmetric " << endl;
    }
    else{
        cout << " Matrix is not symmetric " << endl;
    }
    return 0;
}