#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// using structs to create a object person
//ask for a length of people in line
//for every n it create struct, asking objects: name, age, race, height
// then it print the list
typedef struct Person
{
    char name[50];
    int age;
    char race[10];
    double height;
}johnDoe;

int main(){
    int n;
    johnDoe *p;

    printf("How many people are waiting in line: ");
    scanf("%d", &n);

    p = (johnDoe *)malloc(n * sizeof(johnDoe));

    if (p == NULL)
    {
        exit(1);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the person %d Name: ", i+1);
        scanf("%s",(p->name)+i);

        printf("Enter the person %d age: ", i+1);
        scanf("%d",(p->age)+i);
        
        printf("Enter the person %d race: ", i+1);
        scanf("%s",(p->race)+i);
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("The persons are: %s %d %s", p->name+i);
    }

    return 0;
}