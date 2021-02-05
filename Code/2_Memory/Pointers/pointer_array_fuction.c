#include <stdio.h>
#include <stdlib.h>

int sumArray(int array[], const int n)
{
    int sum = 0;
    int *p;
    int *const finalArray = array + n; //last array element address

    for(p = array;p<finalArray;p++)
    {
        sum += *p; //sum receives p value
    }
    return sum;
}

int main()
{
    int array[5] = {1,2,3,4,5};

    printf("The sum of the array elements is: %d",sumArray(array,5));
    return 0;
}
