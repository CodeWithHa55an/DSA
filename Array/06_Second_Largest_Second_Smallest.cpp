#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[5] = {20, 12, 34, 54, 36};
    int largest = INT_MIN;
    int secondlargest = INT_MIN;
    int smallest = INT_MAX;
    int secondsmallest = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        // Largest
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
        // Smallest
        if (arr[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondsmallest && arr[i] != smallest)
        {
            secondsmallest = arr[i];
        }
    }

    cout << " Largest = : " << largest << endl;
    cout << " Second Largest = : " << secondlargest << endl;
    cout << " Smallest = : " << smallest << endl;
    cout << " Second Smallest = : " << secondsmallest << endl;
    return 0;
}