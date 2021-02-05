//function parameter as a pointer

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valueA,valueB,result=0;
    int *p = &result; //p points to result address (integer)

    printf("Input the value A: ");
    scanf("%d",&valueA);
    printf("Input the value B: ");
    scanf("%d",&valueB);

    normalSum(valueA,valueB,result);
    printf("A+B = %d for main scope\n",result); //value of result variable
    printf("result address is %p for main scope\n\n",&result); //address of result variable

    pointerSum(valueA,valueB,p);
    printf("A+B = %d for main scope\n",*p); // * indicates the value the pointer points to
    printf("result address is %p for main scope\n\n",p); // the pointer points to variable address

}
void normalSum(int valueA,int valueB,int result)
{
//result variable in normalSum scope is a copy of main scope's result variable. The addresses are different.

    result = valueA + valueB;
    printf("\nA+B = %d for normalSum scope\n",result);
    printf("result address is %p for normalSum scope\n\n",&result);
}

void pointerSum(int valueA,int valueB,int *result)
{
//result variable in pointerSum scope is the same of main scope's result variable, because they have the same address.

    *result = valueA + valueB;
    printf("A+B = %d for pointerSum scope\n",*result);
    printf("result address is %p for pointerSum scope\n\n",result);

}
