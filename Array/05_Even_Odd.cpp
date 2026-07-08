#include<iostream>>
using namespace std;
int main(){
    int arr[5];
    int even = 0;
    int odd = 0; 
    cout << " Enter 5 elements " << endl;
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << " Even Numbers are : " << even << endl;
    cout << " Odd Numbers are : " << odd << endl;
   return 0;
}