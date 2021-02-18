#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr);
void printChar(const char *sPtr);
void modifyConstPointer(char * const sPtr);
void modifyConstPointerConstData(const char *const sPtr);

int main(void)
{
    char string[] = "Hello world!";

    printf("The string before conversion is: %s", string);
    convertToUppercase(string);
    printf("\nThe string after conversion is: %s\n", string);

    printChar(string);

    printf("The string before conversion is: %s", string);
    modifyConstPointer(string);
    printf("\nThe string after conversion is: %s\n", string);
}

void convertToUppercase(char *sPtr)
{
    while (*sPtr != '\0'){
        *sPtr = toupper(*sPtr); // convert to uppercase
        ++sPtr; // make sPtr point to the next character
    }
}

void printChar(const char *sPtr)
{
    printf("%s","The string is: ");
    for (;*sPtr != '\0';sPtr++) { // no initialization
        printf("%c", *sPtr);
    }
    puts("");

    // *sPtr = "error: sPtr is a "read-only" pointer"
}

void modifyConstPointer(char *const sPtr)
{
    *sPtr = "Allowed"; // *sPtr is not const
    // sPtr++; error: sPtr is const; cannot assign new address
}

void modifyConstPointerConstData(const char *const sPtr)
{
    // *sPtr = "error: *ptr is const; cannot assign new value";
    //sPtr++; error: ptr is const; cannot assign new address
}
