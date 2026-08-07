#include<iostream>
using namespace std;
int main(){
    int size;
    cout << " Enter size " << endl;
    cin >> size;
    int *arr = new int[size];
    int sum=0;
    cout << " Enter array elements : " << endl;
    for(int i=0;i<size;i++){
        cin>>*(arr+i);
        sum+=*(arr+i);
    }
    cout << " Sum = : " << sum << endl;
    delete[] arr;
    return 0;
}