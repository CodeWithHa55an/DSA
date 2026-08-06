#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,2,4,1,8};
    int n=5;
    int *ptr = arr;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=*(ptr+i);
    }
    cout << " Sum = : " << sum << endl;
return 0;
}