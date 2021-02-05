# Dynamic Memory Allocation

Memory has to be allocated to the variables that we create, so that actual variables can be brought to existence.

When we declare variables, we actually are preparing all the variables that will be used, so that the compiler knows that the variable being used is actually an important part of the program that the user wants. Now, if you see, this is being done before the program executes, you can’t allocate variables by this method while the program is executing.

But what if there is a requirement to change the length (size) of an array?. For Example,

- If there is a situation where only 5 elements are needed to be entered in this array. In this case, the remaining 4 indices are just wasting memory in this array. So there is a requirement to lessen the length (size) of the array from 9 to 5.
- Take another situation. In this, there is an array of 9 elements with all 9 indices filled. But there is a need to enter 3 more elements in this array. In this case 3 indices more are required. So the length (size) of the array needs to be changed from 9 to 12.

This procedure is referred to as **Dynamic Memory Allocation in C**.

### **Reasons and Advantage of allocating memory dynamically:**

1. When we do not know how much amount of memory would be needed for the program beforehand.
2. When we want data structures without any upper limit of memory space.
3. When you want to use your memory space more efficiently.*Example:* If you have allocated memory space for a 1D array as array[20] and you end up using only 10 memory spaces then the remaining 10 memory spaces would be wasted and this wasted memory cannot even be utilized by other program variables.
4. Dynamically created lists insertions and deletions can be done very easily just by the manipulation of addresses whereas in case of statically allocated memory insertions and deletions lead to more movements and wastage of memory.
5. When you want you to use the concept of structures and linked list in programming, dynamic memory allocation is a must.

C provides some functions to achieve these tasks. There are 4 library functions provided by C defined under **<stdlib.h>** header file to facilitate dynamic memory allocation in C programming. They are:

[malloc()](Dynamic%20Memory%20Allocation%20d028447de3d740d09794ffe00f72b3f0/malloc()%201cff5462b9c0465f98ca742ed041de98.md)

[calloc()](Dynamic%20Memory%20Allocation%20d028447de3d740d09794ffe00f72b3f0/calloc()%20685763aabe64420eb5393bab79b3445e.md)

[free()](Dynamic%20Memory%20Allocation%20d028447de3d740d09794ffe00f72b3f0/free()%203b6e1c090520412ea6469cb24e1cf3ae.md)

[realloc()](Dynamic%20Memory%20Allocation%20d028447de3d740d09794ffe00f72b3f0/realloc()%203325c7f3ace5478086fbbe0245b736d3.md)

### Three golden rules:

- Every block of memory that you **malloc()** must subsequently be **free()**d
- Only memory that you **malloc()** should be **free()**d
- Do not **free()** a block of memory more than once.