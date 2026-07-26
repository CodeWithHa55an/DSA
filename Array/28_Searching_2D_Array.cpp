#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows = 3;
    int column = 3;
    cout << " Enter 2d Array Elements " << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<" Enter key to find " << endl;
    cin>>key;
    bool found = false;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==key){
                 cout << "Key found at row " << i << " and Column " << j << " ";
                 found = true;
            }
        }
    }
    if(!found){
        cout << " Key not found " << endl;
    }
    return 0;
}