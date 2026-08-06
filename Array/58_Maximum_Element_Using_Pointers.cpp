#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,1,5,0};
    int n=5;
    int *ptr = arr;
    int max = *ptr;
    int min = *ptr;
    for(int i=0;i<n;i++){
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
        if(*(ptr+i)<min){
            min=*(ptr+i);
        }
    }
cout << " Maximum = : " << max << endl;
cout << " Minimum = : " << min << endl;
return 0;
}