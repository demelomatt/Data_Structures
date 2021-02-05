# Array of structures

Like other primitive data types, we can create an array of structures.

```c
#include<stdio.h>
struct Point
{
	int x, y;
};
int main()
{
	// Create an array of structures
	struct Point arr[10];
	// Access array members
	arr[0].x = 10;
	arr[0].y = 20;
	printf("%d %d", arr[0].x, arr[0].y);
	return 0;
}
```

```c
#include<stdio.h>
struct Point
{
	char name[50];
	int age;
};

int main()
{
    int i;
	// Create an array of structures
	struct Point arr[10];
	// Access array members
	for (i=0;i<10;i++){
		printf("Enter name %d: ",i+1);
		scanf("%s",&arr[i].name);
		printf("Enter age %d: ",i+1);
		scanf("%d",&arr[i].age);
	}
	for (i=0;i<10;i++){
			printf("Name %d is: %s \n",i+1,arr[i].name);
			printf("Age %d is: %d \n",i+1,arr[i].age);
	}
	return 0;
}
```