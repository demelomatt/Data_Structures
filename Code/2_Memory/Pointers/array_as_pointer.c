#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[5] = {'a','b','c','d','e'};
    char s[5] = {'f','g','h','i','j'};
    char *pt = t; //pointer points to the first array element address
    char *ps = &s[0]; //pointer points to the first array element address

    printf("Address: %p\nValue: %c\n",pt,*pt);
    printf("\nAddress: %p\nValue: %c\n",pt +1,*pt +1);
    printf("\nAddress: %p\nValue: %c\n",pt +2,*pt +2);
    printf("\nAddress: %p\nValue: %c\n",ps,*ps);
    printf("\nAddress: %p\nValue: %c\n",ps +1,*ps +1);
    printf("\nAddress: %p\nValue: %c\n",ps +2,*ps +2);


    return 0;
}
