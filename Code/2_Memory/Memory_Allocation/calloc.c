/*
// Program to calculate the sum of n numbers entered by the user

“calloc” or “contiguous allocation” method in C is used to dynamically allocate
the specified number of blocks of memory of the specified type. It initializes each block with a default value ‘0’.

Syntax:
p = (castType*)calloc(n, element-size);
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *p, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = (int*) calloc(n, sizeof(int)); //Allocates n bytes of memory. It initializes each block with a default value ‘0’.

    // Check if the memory has been successfully allocated by calloc or not
    if(p == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Memory successfully allocated using calloc.\n");

    // Get the elements of the array
    for(i = 0; i < n; ++i)
    {
        printf("Enter %d° element: ",i+1);
        scanf("%d", p + i);
        sum += *(p + i);
    }

    printf("Sum = %d", sum);

    //deallocating the memory
    free(p);
    return 0;
}
