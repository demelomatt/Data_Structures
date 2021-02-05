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
	struct Point arr[2];
	// Access array members
	for (i=0;i<2;i++){
		printf("Enter name and age %d: ",i+1);
		scanf("%s%d",&arr[i].name,&arr[i].age);

	}
	for (i=0;i<2;i++){
			printf("%d: Name is: %s, age is %d.\n",i+1,arr[i].name,arr[i].age);
	}
	return 0;
}
