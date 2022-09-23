#include <iostream>
using namespace std;

int binarySearch(int *arr, int size);

int main()
{
    int arr[] = {1, 3, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);
    int index = binarySearch(arr, size);
    cout << "Element found at index " << index << endl;

    return 0;
}

int binarySearch(int *arr, int size)
{
    int val, sIndex = 0, eIndex = size - 1, mid = 0;
    cout << "Enter value to find: ";
    cin >> val;
    while (sIndex <= eIndex)
    {
        mid = (sIndex + eIndex) / 2;
        if (val == arr[mid])
            return mid;
        else if (val < arr[mid])
            eIndex = mid - 1;
        else
            sIndex = mid + 1;
    }

    return -1; // if value not found
}