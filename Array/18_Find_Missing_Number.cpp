/*
Problem Statement
Write a C++ program to find the missing number in an array containing numbers from 1 to N, where exactly one number is missing.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[7];
    cout << " Enter 7 elements " << endl;
    for(int i=0;i<7;i++){
        cin >> arr[i];
    }
    int actualsum = 0;
    int expectedSum = 0;
    for(int i=0;i<=8;i++){
        expectedSum+=i;
    }
    for(int i=0;i<7;i++){
        actualsum+=arr[i];
    }
    int missing = expectedSum - actualsum;
    cout << " Missing Number = : " << missing << endl;
    return 0;
}
