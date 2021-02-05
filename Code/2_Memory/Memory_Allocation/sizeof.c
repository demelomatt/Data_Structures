#include <stdio.h>
#include <stdlib.h>

int main()
{
    // sizeof function computes the size of a data type in bytes

    printf("Size of char: %d\n",sizeof(char));
    printf("Size of short: %d\n",sizeof(short));
    printf("Size of int: %d\n",sizeof(int));
    printf("Size of float: %d\n",sizeof(float));
    printf("Size of double: %d\n",sizeof(double));
    printf("Size of long: %d\n",sizeof(long));

    int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99};
    printf("\nSize of int arr: %d ", sizeof(arr));
    printf("\nNumber of int arr elements: %d",sizeof(arr) / sizeof(arr[0]));

    return 0;
}
