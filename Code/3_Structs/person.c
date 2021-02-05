#include <stdio.h>
#include <stdlib.h>

//a struct (or structure) is a collection of variables (can be of different types) under a single name

struct Person
{
    char name[50];
    int age;
    float height,weight;
};

int main()
{
    struct Person p[2];
    int i;

    for(i=0;i<2;i++)
    {
       printf("Input the %dº person name: ",i+1);
       scanf("%s",&p[i].name);
       printf("Input the %dº person age: ",i+1);
       scanf("%d",&p[i].age);
       printf("Input the %dº person height: ",i+1);
       scanf("%f",&p[i].height);
       printf("Input the %dº person weight: ",i+1);
       scanf("%f",&p[i].weight);
       printf("\n");
    }

    for(i=0;i<2;i++)
    {
        printf("\nPerson %d:\nName: %s\nAge: %d\nHeight: %2.2f\nWeight: %2.2f\n",i+1,p[i].name,p[i].age,p[i].height,p[i].weight);
    }

    return 0;
}
