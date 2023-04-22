#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    struct vehicle
    {
        char manufacturer[15];
        char make[15];
        char model[22];
        double price;
    };

    struct vehicle dealership[] = {{"Toyota", "Toyota", "Corolla", 21550}, {"Toyota", "Toyota", "Camry", 25945}, {"Toyota", "Toyota", "Avalon", 36825}, {"Toyota", "Toyota", "Mirai", 49500}, {"Toyota", "Toyota", "Sequoia", 58300}, {"Toyota", "Toyota", "Tacoma", 27250}, {"Toyota", "Toyota", "Tundra", 36965}, {"Toyota", "Lexus", "IS", 40585}, {"Toyota", "Lexus", "ES", 42490}, {"Toyota", "Lexus", "GX", 57575}, {"Chevrolet", "Chevy", "Trailblazer", 22100}, {"Chevrolet", "Chevy", "Camaro", 26100}, {"Chevrolet", "Chevy", "Equinox", 26600}, {"Chevrolet", "Chevy", "Traverse", 34520}, {"Chevrolet", "Chevy", "Tahoe", 54200}, {"Chevrolet", "Chevy", "Suburban", 56900}, {"Chevrolet", "Chevy", "Corvette", 64500}, {"Chevrolet", "Chevy", "Spark", 13600}, {"Chevrolet", "Chevy", "Trax", 21700}, {"Chevrolet", "Chevy", "Malibu", 23400}, {"Nissan", "Nissan", "Versa", 18990}, {"Nissan", "Nissan", "Sentra", 22700}, {"Nissan", "Nissan", "Altima", 35385}, {"Nissan", "Nissan", "Maxima", 43300}, {"Nissan", "Nissan", "Pathfinder", 50660}, {"Nissan", "Nissan", "Rogue", 38640}, {"Nissan", "Nissan", "Murano", 46910}, {"Nissan", "Infiniti", "Q50", 42650}, {"Nissan", "Infiniti", "QX55", 49150}, {"Nissan", "Infiniti", "QX80", 72700}, {"BMW", "BMW", "2 Series Coupe", 38050}, {"BMW", "BMW", "3 Series Sedan", 48220}, {"BMW", "BMW", "4 Series Convertible", 59320}, {"BMW", "BMW", "5 Series Sedan", 55175}, {"BMW", "BMW", "7 Series Sedan", 93400}, {"BMW", "BMW", "X1", 39700}, {"BMW", "BMW", "X3", 46050}, {"BMW", "BMW", "X4", 54050}, {"BMW", "BMW", "X5", 75400}, {"BMW", "BMW", "X7", 77850}, {"Volkswagen", "VW", "Jetta", 18995}, {"Volkswagen", "VW", "Passat", 23995}, {"Volkswagen", "VW", "Arteon", 36995}, {"Volkswagen", "Audi", "Q5", 43500}, {"Volkswagen", "Audi", "Q3", 38700}, {"Volkswagen", "Audi", "S6", 72700}, {"Volkswagen", "Audi", "A6", 55900}, {"Volkswagen", "Porsche", "Panamera", 132760}, {"Volkswagen", "Porsche", "Macan", 69480}, {"Volkswagen", "Porsche", "Cayenne", 92960}};

    struct vehicle available[50];
    int chose = 0;
    float salary;
    float down_payment;
    float princple;
    float interest;

    printf("What is you salary: ");
    scanf("%f", &salary);
    if (salary < 1)
    {
        printf("Your broke! \n");
        return 0;
    }
    printf("Enter Down payment: ");
    scanf("%f", &down_payment);

    float max_allowed = (salary / 12) * .15;

    if (salary >= 125000)
    {
        interest = .0479;
    }
    if (salary > 80000 && salary < 12500)
    {
        interest = .0655;
    }
    if (salary > 45000 && salary <= 80000)
    {
        interest = .0949;
    }
    if (salary <= 45000)
    {
        interest = .1329;
    }

    for (size_t i = 0; i < 50; i++)
    {
        princple = dealership[i].price - down_payment;

        float allowed = (princple + princple * interest * 5) / (5 * 12);

        if (allowed <= max_allowed)
        {
            available[chose] = dealership[i];
            chose++;
        }
       
    }

    for (size_t i = 0; i < sizeof(available); i++)
    {

        if (strcmp(available[i].manufacturer, "Toyota") != 0 && strcmp(available[i].manufacturer, "Nissan") != 0 && strcmp(available[i].manufacturer, "Chevrolet") != 0 && strcmp(available[i].manufacturer, "BMW") != 0 && strcmp(available[i].manufacturer, "Volkswagen") != 0)
        {   
            chose = i;
            break;
        }

    }


    struct vehicle temp[chose];
    for (size_t i = 0; i < chose; i++)
    {
        temp[i] = available[i];

    }
    
    
    printf("Available Manufacturers: \n");

     int count = 1;
    int counter = 0;
     char *facturer[chose];

    for (size_t i = 0; i < chose; i++)
    {
        if (strcmp(temp[i].manufacturer, temp[i - 1].manufacturer) == 0)
        {
            continue;
        }
        printf("%d)%s ",count,temp[i].manufacturer);
        facturer[counter] = temp[i].manufacturer;
        counter++;
        count++;

    }
    int selection;
    printf("\nSelect manufacturer: ");
     scanf("%d", &selection);
    selection--;
    int price[chose];
    count = 0;
    counter = 1;
    printf("Available Make/Model: \n");

    for (size_t i = 0; i < chose; i++)
    {
        if (strcmp(facturer[selection],temp[i].manufacturer) == 0)
        {
            printf("%d)%s %s - $%.2f\n",counter,temp[i].make, temp[i].model, temp[i].price);
            price[count] = temp[i].price;
            counter++;
            count++;
        }
        
    }
    int descision;
    printf("Select Make/Model: ");
    scanf("%d",&descision);
    descision--;
    for (size_t i = 0; i < chose; i++)
    {
        //printf("%d-%d ",i,price[i]);
     if (price[descision] == temp[i].price)
        {
            princple = temp[i].price - down_payment;
            float allowed = (princple + princple * interest * 5) / (5 * 12);
            printf("You selected the %s %s. Your monthly payment is $%.2f",temp[i].make,temp[i].model, allowed);
        
        }
    }
    

    
    return 0;
}
