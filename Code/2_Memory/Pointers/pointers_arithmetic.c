#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int iValue, *piValue;
    double dValue, *pdValue;
    char cValue, *pcValue;

    piValue = &iValue; //points to iValue address (integer)
    pdValue = &dValue; //points to dValue address (double)
    pcValue = &cValue; //points to cValue address (char)

    printf("piValue address before increment: %p\npdValue address before increment: %p\ncValue address before increment: %p\n",piValue,pdValue,pcValue);

    piValue++;
    pdValue++;
    pcValue++;

    printf("\npiValue address after increment: %p\npdValue address after increment: %p\ncValue address after increment: %p\n",piValue,pdValue,pcValue);

    return 0;
}
