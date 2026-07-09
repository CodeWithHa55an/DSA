//Find Frequency of Every Element
#include<iostream>
using namespace std;
int main(){
    int arr[7];
    cout << " Enter 7 elements " << endl;
    for(int i=0;i<7;i++){
        cin>> arr[i];
    }
    for(int i=0;i<7;i++){
        bool visited = false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                visited = true;
                break;
            }
        }
        if(visited){
        continue;
    }
    int count = 1;
    for(int j=i+1;j<7;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
    cout << arr[i] << " -> " << count << endl;
    }
    return 0;
}