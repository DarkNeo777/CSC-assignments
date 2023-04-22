#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number_of_elements;
    double *value;
    printf("Enter the number of elements: \n");
    scanf("%d", &number_of_elements);
    
    value = (double *)calloc(number_of_elements, sizeof(double));
    if(value == NULL){
        printf("Error memory did not allocate");
        exit(0);
    }

    for (size_t i = 0; i < number_of_elements; ++i)
    {
        printf("Enter the number %d: ", i+1);
        scanf("%lf", value + i );
    }

    for (size_t i = 1; i < number_of_elements; ++i)
    {
        if (*value < *(value + i))
        {
            *value = *(value + i);
        }
    }
    
    printf("Largest element is: %.2lf", *value);
    free(value);
    return 0;
}
