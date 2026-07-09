
/* Problem Statement

Write a C++ program to remove duplicate elements from an array.*/

#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int size = 7;

    cout << "Enter 7 elements:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                // Shift elements left
                for (int k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                size--;
                j--;
            }
        }
    }

    cout << "\nArray after removing duplicates:\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}