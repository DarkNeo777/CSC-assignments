#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[]) {
   char vendine_machine[10][3][20]= {

        {"Cheetos", "B4", "1.00"},

        {"M&M", "C3", "1.50"},
        {"Jumbo honey bun", "Y2", "2.00"},

        {"Oreos", "T2", "1.75"},
        {"Pespi", "W1", "2.50"},
        {"Water", "U0", "1.25" },
        {"Sprite", "I9", "2.50"},
        {"Gummy", "R4", "1.00"},
        {"Double bubble", "G14", "1.00"},
        {"Starbuck frap", "X8", "3.50"},

    };
    printf("Items in the Vending machine:\n");
    printf("-----------------------------\n");
    for (size_t i = 0; i < 10; i++)
    {
      printf("%s | %s | %s\n",vendine_machine[i][0], vendine_machine[i][1],vendine_machine[i][2]);
    }
    float balance = 10.50;
    char item0[5];
   
    while (balance != 0 )
    {
        printf("----------------------------\nYour balanace: $%2.2f\n", balance);
   
   
    printf("Choose an item:\n");
    scanf("%s",item0);

    if (strcmp(item0,"B4") == 0)
    {
      balance = balance - 1.00;
    }
    else if (strcmp(item0,"C3")== 0)
    {
      balance = balance - 1.50;
    }
    else if (strcmp(item0,"Y2")== 0)
    {
      balance = balance - 2.00;
    }
    else if (strcmp(item0,"T2")== 0)
    {
      balance = balance - 1.75;
    }
    else if (strcmp(item0,"W1")== 0)
    {
      balance = balance - 2.50;
    }
    else if (strcmp(item0,"U0")== 0)
    {
      balance = balance - 1.25;
    }
     else if (strcmp(item0,"I9")== 0)
    {
      balance = balance - 2.50;
    }
     else if (strcmp(item0,"R4")== 0)
    {
      balance = balance - 1.00;
    }
     else if (strcmp(item0,"G14")== 0)
    {
      balance = balance - 1.00;
    }
     else if (strcmp(item0,"X8")== 0)
    {
      balance = balance - 3.50;
    }else printf("Wrong value entered\n");
   
    printf("Balance: %2.2f \n",balance);
    }
    printf("No more money, you broke :(");
 
  return 0;
}