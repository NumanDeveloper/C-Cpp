#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr = array;
    // its comparing value of pointer here
    if(ptr[4] == array[4]){
        printf("Yes");}
    else
        printf("No");

    return 0;
}