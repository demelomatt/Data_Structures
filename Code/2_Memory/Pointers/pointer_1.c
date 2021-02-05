#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10, y = 20;
    int *p; //pointer will points to an integer
    p = &x; //p points to x address

    printf("First value of x: %d \nFirst value of y: %d\n",x,y);
    printf("First address: %p\n",p);

    *p = y; // x receives value of y

    printf("\nSecond value of x: %d \nSecond value of y: %d\n",x,y);
    printf("\Second address: %p\n",p);

    //x value has been changed, but the address remains

    printf("%d",sizeof(x));

    return 0;
}
