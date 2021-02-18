#include <stdio.h>


void bubbleSort(int *const array, const int size); // function prototype

int main(void)
{
    int a[] = {5,3,8,1,21,13,2};
    const int length = sizeof(a) / sizeof(a[0]) -1;

    puts("Elements of array before sorted:");

    for (int i = 0; i <= length; i++){
        printf("%d ",a[i]);
    }

    bubbleSort(a,length);

    puts("\n\nElements of array after sorted:");

    for (int i = 0; i <= length; i++){
        printf("%d ",a[i]);
    }
}

// sort an array of integers using bubble sort algorithm
void bubbleSort(int *const array, const int size)
{
    void swap(int *const element1, int *const element2); // function prototype

    // loop to control passes
    for (int i = 0; i <= size -1; i++){

        // loop to control comparisons during each pass
        for (int j = 0; j <= size -1; j++){

            // swap adjacent elements if they’re out of order
            if (array[j] > array[j + 1]){
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

//swap values at memory locations to which element1Ptr and element2Ptr point
void swap(int *const element1, int *const element2)
{
    int temp = *element1;
    *element1 = *element2;
    *element2 = temp;
}
