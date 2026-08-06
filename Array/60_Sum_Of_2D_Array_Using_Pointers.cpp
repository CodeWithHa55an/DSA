#include<iostream>
using namespace std;
int main(){
     int arr[3][3]={{0,1,2},{3,4,5},{6,7,8}};
    int rows=3;
    int column=3;
    int sum=0;
    for(int i=0;i<rows;i++){
       for(int j=0;j<column;j++){
        sum+=*(*(arr+i)+j);
       }
    }
    cout << " Sum = : " << sum << endl;
return 0;
}