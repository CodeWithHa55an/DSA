#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << " Enter 5 elements " << endl;
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    for(int i=0;i<5;i++){
        bool unique = true;
        for(int j=0;j<5;j++){
            if(i!=j&&arr[i]==arr[j]){
                unique==false;
                break;
            }
        }
        if(unique){
            cout << " Unique Element = : " << arr[i] << " ";
        }
    }
    return 0;
}
/*if (i != j && arr[i] == arr[j]) ke jb unke index different ho aur element same ho to unique = false hojayega, otherwise true hojayega.
This means:

i != j
Don't compare an element with itself.
arr[i] == arr[j]
If another index has the same value...
*/