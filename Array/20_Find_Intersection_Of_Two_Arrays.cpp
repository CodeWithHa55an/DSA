#include<iostream>
using namespace std;
int main(){
    int arr1[5],arr2[5];
    cout << " Enter 5 elements " << endl;
    for(int i=0;i<5;i++){
        cin >> arr1[i];
    }
    cout << " Enter 5 elements " << endl;
    for(int i=0;i<5;i++){
        cin >> arr2[i];
    }
    cout << " Intersection Array " << endl;
    bool found = false;
    for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
        if(arr1[i]==arr2[j]){
            cout << arr1[i] << " ";
            found = true;
            break;
        }
       }
    }
    if(!found){
        cout << " No common elements found " <<endl;
    }
    return 0;
}
/*
1. Input both arrays.
2. Pick one element from the first array.
3. Compare it with every element of the second array.
4. If a match is found, print it.
5. Repeat for all elements of the first array.
*/