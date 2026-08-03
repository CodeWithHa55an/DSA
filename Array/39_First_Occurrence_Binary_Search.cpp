#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,2,3,5};
    int key;
    cout << "Enter key to find ";
    cin>>key;
    int start=0;
    int end=4;
    int answer = -1;
    while(start<=end){
        int mid = ( start + end )/2;
        if(arr[mid]==key){
            answer = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
           start=mid+1;
        }
    }
    cout << " First Occurence = " << answer << endl;
    return 0;
}
/*
Array:
10 20 20 20 30 40 50 60

Key = 20

Initial:
start = 0
end = 7
answer = -1

------------------------------------------------

1st Iteration

mid = 3

arr[3] = 20

Found

answer = 3

Move LEFT

end = 2

------------------------------------------------

2nd Iteration

start = 0
end = 2

mid = 1

arr[1] = 20

Found

answer = 1

Move LEFT

end = 0

------------------------------------------------

3rd Iteration

start = 0
end = 0

mid = 0

arr[0] = 10

20 > 10

Move RIGHT

start = 1

------------------------------------------------

start = 1
end = 0

Loop Ends

Output = 1
*/