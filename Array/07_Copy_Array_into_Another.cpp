#include <iostream>
using namespace std;
int main()
{
    int arr1[5], arr2[5];
    cout << " Enter 5 elements " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }
    // Orignal Array
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    // Copied Array
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}