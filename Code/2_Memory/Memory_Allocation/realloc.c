
/*
Dynamically change the memory allocation of a previously allocated memory.
Re-allocation of memory maintains the already present value and new blocks will be initialized with default garbage value

Syntax:
p = realloc(p, newSize);
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i , n1, n2;
    printf("Enter size: ");
    scanf("%d", &n1);

    p = (int*) calloc(n1, sizeof(int));

    printf("Addresses of previously allocated memory: ");
    for(i = 0; i < n1; ++i)
         printf("%p\n",p + i);

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // rellocating the memory
    p = realloc(p, n2 * sizeof(int));

    printf("Addresses of newly allocated memory: ");
    for(i = 0; i < n2; ++i)
         printf("%p\n", p + i);

    free(p);

    return 0;
}
