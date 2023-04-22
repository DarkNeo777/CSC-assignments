#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverseString(char *a){
    int tmp = sizeof(a);
    char verse;
    for (size_t i = 0; i < tmp; i++)
    {
        for (size_t j = tmp; j >= 0; j--)
        {
            verse = a[i];
            a[i] = a[j];
            a[j] = verse;
        }
        
    }
    
}

int main(void){
    char a[10];
    char b[10];
    char *c = (char*)malloc(3 * sizeof(char));
    char loser[10]= "loser";
    char *ptr = &loser;
    reverseString(ptr);
    printf("the String to be reversed is Loser ");
    printf("\n %s", ptr);

    // printf("Enter a string: \n");
    // scanf("%s", &a);
    // printf("Enter the same string: \n");
    // scanf("%s", &b);

    // if (strncmp(a,b) != 0)
    // {
    //     printf("They are not the same string %s != %s \n", a, b);
    // } else printf("Hurray they are the same string");
    
    

    return 0;
}