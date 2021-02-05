/*
The name "malloc" stands for memory allocation.
The malloc() function reserves a block of memory of the specified number of bytes. And, it returns a pointer of void which can be casted into pointers of any form.

Syntax of malloc():
p = (castType*) malloc(size);
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p;
    int n,i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    p = (int*) malloc(n * sizeof(int)); //Allocates n bytes of memory. It initializes each block with default garbage value.


    // Check if the memory has been successfully allocated by malloc or not
    if(p == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Memory successfully allocated using malloc.\n\n");

    // Shows default garbage value.
    for (i = 0; i < n; ++i)
    {
        printf("Address of element %d: %p\n", i,p+i);
        printf("Garbage value of element %d: %d\n\n", i+1,*(p+i));
    }

    // Get the elements of the array
    for (i = 0; i < n; ++i)
    {
        p[i] = i + 1;
    }

    // Print the elements of the array
    printf("The elements of the array after assignment are: ");
    for (i = 0; i < n; ++i)
    {
        printf("%d, ", p[i]);
    }

    // deallocating the memory (but the garbage remains)
    free(p);
    printf("\n");

    return 0;
}
