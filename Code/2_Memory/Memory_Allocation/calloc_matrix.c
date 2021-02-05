#include <stdio.h>
#include <stdlib.h>

int main()
{
    // A declaration of a two-dimensional matrix requires a pointer to a pointer
    int**p;
    int i,j,x,y;

    printf("Enter the number of lines: ");
    scanf("%d",&i);
    printf("Enter the number of columns: ");
    scanf("%d",&j);

    p = (int*) calloc(i,sizeof(int)); //allocation of lines

    if (p == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    for (x=0;x<i;x++) // for each line
    {
        p[x] = (int*) calloc(j,sizeof(int)); //allocation of columns

        if (p[x] == NULL)
        {
            printf("Error! memory not allocated.");
            exit(0);
        }
    }

    for (x=0;x<i;x++) //for each line
    {
        for (y=0;y<j;y++) //for each column
        {
            printf("Enter the element of index %d,%d: ",x,y); //
            scanf("%d",&p[x][y]);
        }

    }

    for (x=0;x<i;x++) //for each line
    {
        for (y=0;y<j;y++) //for each column
        {
            printf("\nThe element of index %d,%d is: %d",x,y,p[x][y]);
        }

    }

    //deallocating the memory
    for (x=0;x<i;x++)
    {
        free(p[x]); //First we need deallocate array of lines
    }
    free(p); // now we can deallocate the pointer

    return 0;
}
