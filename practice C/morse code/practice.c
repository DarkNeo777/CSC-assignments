#include<stdio.h>
#include <stdlib.h>
#include<string.h>
void morse_code(char a[]){
    int zez = sizeof(*a);
    for (size_t i = 0; i < zez; i++)
    {
        const char* temp = a[i];
        if (strcmp(temp, "a") == 0 ||strcmp(temp, "a") == 0)
    {
        printf(".-");
    }
       if (strcmp(temp, "b") == 0 ||strcmp(temp, "B") == 0)
    {
        printf("-...");
    }
       if (strcmp(temp, "c") == 0 ||strcmp(temp, "C") == 0)
    {
        printf("-.-.");
    }
       if (strcmp(temp, "D") == 0 ||strcmp(temp, "d") == 0)
    {
        printf("-..");
    }
       if (strcmp(temp, "e") == 0 ||strcmp(temp, "E") == 0)
    {
        printf(".");
    }
       if (strcmp(temp, "f") == 0 ||strcmp(temp, "F") == 0)
    {
        printf("..-.");
    }
       if (strcmp(temp, "g") == 0 ||strcmp(temp, "G") == 0)
    {
        printf("--.");
    }
       if (strcmp(temp, "h") == 0 ||strcmp(temp, "H") == 0)
    {
        printf("....");
    }
       if (strcmp(temp, "i") == 0 ||strcmp(temp, "I") == 0)
    {
        printf("..");
    }
    
    }
    
    
}

int main(int argc, char const *argv[])
{
    char letter[20];
    printf("Enter a letter: ");
    scanf("%s",letter);
    morse_code(letter);
    return 0;
}
