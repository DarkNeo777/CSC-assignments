#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vehicle
{
    char manufacturer[15];
    char make[15];
    char model[22];
    double price;
};

int main(int argc, char *argv[])
{
    struct vehicle vehicle1 = {"Toyota", "Toyota", "Corolla", 21550};
    struct vehicle vehicle2 = {"Toyota", "Toyota", "Camry", 25945};
    struct vehicle vehicle3 = {"Toyota", "Toyota", "Avalon", 36825};
    struct vehicle vehicle4 = {"Toyota", "Toyota", "Mirai", 49500};
    struct vehicle vehicle5 = {"Toyota", "Toyota", "Sequoia", 58300};
    struct vehicle vehicle6 = {"Toyota", "Toyota", "Tacoma", 27250};
    struct vehicle vehicle7 = {"Toyota", "Toyota", "Tundra", 36965};
    struct vehicle vehicle8 = {"Toyota", "Lexus", "IS", 40585};
    struct vehicle vehicle9 = {"Toyota", "Lexus", "ES", 42490};
    struct vehicle vehicle10 = {"Toyota", "Lexus", "GX", 57575};
    struct vehicle vehicle11 = {"Chevrolet", "Chevy", "Trailblazer", 22100};
    struct vehicle vehicle12 = {"Chevrolet", "Chevy", "Camaro", 26100};
    struct vehicle vehicle13 = {"Chevrolet", "Chevy", "Equinox", 26600};
    struct vehicle vehicle14 = {"Chevrolet", "Chevy", "Traverse", 34520};
    struct vehicle vehicle15 = {"Chevrolet", "Chevy", "Tahoe", 54200};
    struct vehicle vehicle16 = {"Chevrolet", "Chevy", "Suburban", 56900};
    struct vehicle vehicle17 = {"Chevrolet", "Chevy", "Corvette", 64500};
    struct vehicle vehicle18 = {"Chevrolet", "Chevy", "Spark", 13600};
    struct vehicle vehicle19 = {"Chevrolet", "Chevy", "Trax", 21700};
    struct vehicle vehicle20 = {"Chevrolet", "Chevy", "Malibu", 23400};
    struct vehicle vehicle21 = {"Nissan", "Nissan", "Versa", 18990};
    struct vehicle vehicle22 = {"Nissan", "Nissan", "Sentra", 22700};
    struct vehicle vehicle23 = {"Nissan", "Nissan", "Altima", 35385};
    struct vehicle vehicle24 = {"Nissan", "Nissan", "Maxima", 43300};
    struct vehicle vehicle25 = {"Nissan", "Nissan", "Pathfinder", 50660};
    struct vehicle vehicle26 = {"Nissan", "Nissan", "Rogue", 38640};
    struct vehicle vehicle27 = {"Nissan", "Nissan", "Murano", 46910};
    struct vehicle vehicle28 = {"Nissan", "Infiniti", "Q50", 42650};
    struct vehicle vehicle29 = {"Nissan", "Infiniti", "QX55", 49150};
    struct vehicle vehicle30 = {"Nissan", "Infiniti", "QX80", 72700};
    struct vehicle vehicle31 = {"BMW", "BMW", "2 Series Coupe", 38050};
    struct vehicle vehicle32 = {"BMW", "BMW", "3 Series Sedan", 48220};
    struct vehicle vehicle33 = {"BMW", "BMW", "4 Series Convertible", 59320};
    struct vehicle vehicle34 = {"BMW", "BMW", "5 Series Sedan", 55175};
    struct vehicle vehicle35 = {"BMW", "BMW", "7 Series Sedan", 93400};
    struct vehicle vehicle36 = {"BMW", "BMW", "X1", 39700};
    struct vehicle vehicle37 = {"BMW", "BMW", "X3", 46050};
    struct vehicle vehicle38 = {"BMW", "BMW", "X4", 54050};
    struct vehicle vehicle39 = {"BMW", "BMW", "X5", 75400};
    struct vehicle vehicle40 = {"BMW", "BMW", "X7", 77850};
    struct vehicle vehicle41 = {"Volkswagen", "VW", "Jetta", 18995};
    struct vehicle vehicle42 = {"Volkswagen", "VW", "Passat", 23995};
    struct vehicle vehicle43 = {"Volkswagen", "VW", "Arteon", 36995};
    struct vehicle vehicle44 = {"Volkswagen", "Audi", "Q5", 43500};
    struct vehicle vehicle45 = {"Volkswagen", "Audi", "Q3", 38700};
    struct vehicle vehicle46 = {"Volkswagen", "Audi", "S6", 72700};
    struct vehicle vehicle47 = {"Volkswagen", "Audi", "A6", 55900};
    struct vehicle vehicle48 = {"Volkswagen", "Porsche", "Panamera", 132760};
    struct vehicle vehicle49 = {"Volkswagen", "Porsche", "Macan", 69480};
    struct vehicle vehicle50 = {"Volkswagen", "Porsche", "Cayenne", 92960};
    


    int salary = 60000;
    float interest; 
    int down = 0;
    float allowed = salary * .15;
    float monthly;

    if (salary > 125,000)
    {
        interest = 4.79;
    } else if(salary >= 80,000 && salary < 125,000){
        interest = 6.55;
    } else if(salary < 80,000 && salary >= 45,000){
        interest = 9.49;
    }else if (salary < 45,000)
    {
        interest = 13.28;
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        printf("%s",vehicle10);
        
    }
    
    if (monthly <= allowed)
    {
        
    }
    
        
    printf("Enter the down payment: ");
    scanf("%d",&down);


    printf("The down payment: %d, the price allowed to buy: %.2f", down, allowed);

    return 0;
}