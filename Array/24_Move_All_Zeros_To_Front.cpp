#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << " Enter 5 elements " << endl;
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    int index = 4;
    for(int i=0;i<=4;i--){
        if(arr[i]!=0){
            arr[index] = arr[i];
            index--;
        }
    }
    for(int i=index;i>=0;i--){
        arr[i]=0;
    }
    cout << " Updated Array " << endl;
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
/* 
You can use both loops:
for (int i = index; i >= 0; i--)
{
    arr[i] = 0;
}

you can write:

while (index >= 0)
{
    arr[index] = 0;
    index--;
}
*/