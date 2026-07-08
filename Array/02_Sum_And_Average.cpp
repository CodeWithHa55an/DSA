#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum = 0;
    float average;
    cout << "Enter 5 elements " << endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout << " Sum = " << sum << endl;
    average = float(sum)/5;
     cout << " Average = " << average << endl;
 return 0;
}