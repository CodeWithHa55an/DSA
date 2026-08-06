#include<iostream>
using namespace std;
void swapNum(int *a , int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
 int x = 10;
 int y = 20;
 swapNum(&x,&y);
 cout << " X = : " << x << endl;
 cout << " Y = : " << y << endl;
 return 0;

}