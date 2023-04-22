#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void change(double change ){
int ones;
int quarters;
int dimes;
int nickels;
int pennies;
int c=change*100;

while(c>=1){
    if(c>=100){
      ones++;
      c=c-100;
      continue;
    }
    else if(c>=25){
      quarters++;
      c=c-25;
      continue;
    }
    else if(c>=10){
      dimes++;
      c=c-10;
      continue;
    }
    else if(c>=5){
      nickels++;
      c=c-5;
      continue;
    }
    else if(c>=1){
      pennies++;
      c=c-1;
      continue;
    }
}
printf("Your change is %d dollars, %d quarters, %d dimes, %d nickels, %d pennies.\n",ones, quarters, dimes, nickels, pennies);
}


int main (int argc, char *argv[]){

struct vendingItem
{
   char code[3];
   char name[15];
   char type[6];
   double price;
};

struct vendingItem vendingItems[] = {{"C3","BBQ Lays","snack",1.55}, {"Q0","Pepsi","drink",1.55}, {"R2","S&V Lays","snack",1.55}, {"J4","Sprite","drink",1.50}, {"E2","Yogurt","snack",1.25}, {"D5","M&Ms","snack",1.75}}; 


int items = 1;
char item[3];
char decision[2];
struct vendingItem chosen[3];

while(items<3){
    printf("Available Items:\n"); 
    for(int i=0; i<=5; i++){
      if(i==2 || i==5){
        printf("%s)%s\n",vendingItems[i].code, vendingItems[i].name);
      }
      else{
        printf("%s)%s\t",vendingItems[i].code, vendingItems[i].name);
      }
    }

if(items==1)printf("Please Select a snack:\nItem%d:",items);
else printf("Please Select a drink:\nItem%d:",items);
scanf("%s",item); 
for(int i=0; i<=5; i++){

    if(strcmp(item, vendingItems[i].code)==0){
      if(items==1){
        if(strcmp("snack",vendingItems[i].type)==0){
          printf("Print:$%.2f\n",vendingItems[i].price);
          printf("Are you sure? (Y/N):");
          scanf("%s",decision);
          if(strcasecmp(decision, "Y")==0){
            chosen[items]=vendingItems[i];
            items++;
          }
          else continue;
        }
        else printf("Item not a snack, Choose again!\n");
        continue;
       }
     if(items==2){
       if(strcmp("drink",vendingItems[i].type)==0){
         printf("Print:$%.2f\n",vendingItems[i].price);
         printf("Are you sure? (Y/N):");
         scanf("%s",decision);
         if(strcasecmp(decision, "Y")==0){
           chosen[items]=vendingItems[i];
           items++;
         }
       else continue;
      }
      else printf("Item not a drink, Choose again!\n");
      continue;
    }
}

} //for loop
}//while loop
printf("You selected %s and %s. ", chosen[1].name, chosen[2].name);
change(((atof(argv[1])-chosen[1].price)-chosen[2].price));
return 0;
}