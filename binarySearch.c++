#include <iostream>
using namespace std;

int binarySearch(int *arr, int size);

int main(){
    int arr[] = {1,3,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int index = binarySearch(arr, size);
    cout<<"Element found at index "<<index<<endl;

    return 0;
}

int binarySearch(int *arr, int size){
    int x, i=0, j=size-1, m=0;
    cout<<"Enter value to find: ";
    cin>>x;
    while (i <= j)
    {
        m = (i + j) / 2;
        if (x == arr[m])
            return m;
        else if(x < arr[m])
            j = m-1;
        else    
            i = m+1;
    }
    return -1; // if not found
}