#include <iostream>
using namespace std;
int binary_search(int *arr, int size);
int main(){
    int arr[] = {1,3,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    cout<<binary_search(arr, size);

    return 0;
}

int binary_search(int *arr, int size){
    int x, i=0, j=size-1, m=0;
    cout<<"Enter value to find: ";
    cin>>x;
    while (i < j)
    {
        m = i+(j-i)/2;
        if(x = arr[m])
            return m;
        else if(x < arr[m])
            j = m-1;
        else    
            i = m+1;
    }   
    return 0;
}