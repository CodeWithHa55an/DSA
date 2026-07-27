#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int r=3;
    int c=3;
    int n=3;
    cout << " Enter elements of 2d array " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> arr[i][j];
        }
    }
    cout << " Matrix " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int primarysum=0;
    int secondarysum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                primarysum+=arr[i][j];
            }
          if(j==n-i-1){
                secondarysum+=arr[i][j];
            }
        }
    }
    cout << " Sum of primary diagonal = " << primarysum << endl;
    cout << " Sum of secondary diagonal = " << secondarysum << endl;
    return 0;
}
