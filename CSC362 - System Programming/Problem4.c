#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    char last_name[20];
    char first_name[20];
    int grade;
    char letter[2];

    printf("Enter Student last name: ");
    scanf("%s", last_name);  
    printf("Enter Student first name: ");
    scanf("%s", first_name);
    printf("Enter Student grade: ");
    scanf("%d", grade);
    
    if (grade > 93)
    {
        letter[0] = 'A';
    }
    else if (grade < 92 && grade > 90)
    {
        letter[0] = "A-";
    }
    else if(grade < 89 && grade > 87)
    {
        letter[0] ='B+';
    } else if(grade < 86 && grade > 83)
    {
        letter[0] ='B';
    } else if(grade < 82 && grade > 80)
    {
        letter[0] ='B-';
    }
     else if(grade < 79 && grade > 77)
    {
        letter[0] ='C+';
    }
     else if(grade < 76 && grade >73)
    {
        letter[0] ='C';
    }
     else if(grade < 72 && grade > 70)
    {
        letter[0] ='C-';
    }
    
     else if(grade < 69 && grade > 67)
    {
        letter[0] ='D+';
    }
     else if(grade < 66 && grade > 63)
    {
        letter[0] ='D';
    }
     else if(grade < 62 && grade > 60)
    {
        letter[0] ='D-';
    }
     else if(grade < 59 && grade > 0)
    {
        letter[0] ='F';
    }

    printf(" %s %s recieved a %d on the midterm exam which is a %c",first_name,last_name,grade,letter[0]);
    return 0;
}