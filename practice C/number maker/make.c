#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void numPrinter(int number)
{
    switch (number)
    {
    case 1:
        printf("   1111     \n");
        printf("     11     \n");
        printf("     11     \n");
        printf("     11     \n");
        printf("  11111111  \n");
        printf("            \n");

        break;
    case 2:
        printf("    22222   \n");
        printf("  22   22   \n");
        printf("      22    \n");
        printf("    22      \n");
        printf("   22       \n");
        printf("  22222222  \n");
        printf("            \n");
        break;
    case 3:
        printf("  33333333  \n");
        printf("       333  \n");
        printf("  33333333  \n");
        printf("  33333333  \n");
        printf("       333  \n");
        printf("  33333333  \n");
        printf("            \n");
        break;
    case 4:
        printf("  44    44  \n");
        printf("  44    44  \n");
        printf("  44444444  \n");
        printf("        44  \n");
        printf("        44  \n");
        printf("        44  \n");
        printf("            \n");
        break;
    case 5:
        printf("  55555555  \n");
        printf("  555       \n");
        printf("  55555555  \n");
        printf("       555  \n");
        printf("       555  \n");
        printf("  55555555  \n");
        printf("            \n");
        break;
    case 6:
        printf("  66666666  \n");
        printf("  66        \n");
        printf("  66666666  \n");
        printf("  66    66  \n");
        printf("  66    66  \n");
        printf("  66666666  \n");
        printf("            \n");
        break;
    case 7:
        printf("  77777777  \n");
        printf("       77   \n");
        printf("      77    \n");
        printf("     77     \n");
        printf("    77      \n");
        printf("   77       \n");
        printf("            \n");
        break;
    case 8:
        printf("  88888888  \n");
        printf("  88    88  \n");
        printf("  88888888  \n");
        printf("  88888888  \n");
        printf("  88    88  \n");
        printf("  88888888  \n");
        printf("            \n");
        break;
    case 9:
        printf("  99999999  \n");
        printf("  99    99  \n");
        printf("  99999999  \n");
        printf("       999  \n");
        printf("       999  \n");
        printf("       999  \n");
        printf("            \n");
        break;
    default:
        printf("  00000000  \n");
        printf("  00    00  \n");
        printf("  00    00  \n");
        printf("  00    00  \n");
        printf("  00    00  \n");
        printf("  00000000  \n");
        printf("            \n");
        break;
    }
}
int main()
{
    double number;
    printf("Print a number between 0-9:");
    scanf("%lf", &number);
    double *ptr = &number;

    double d = *ptr;
    int temp;

    if (d > 9 && d < 100)
    {
        temp = (int)d % 10;
        d  = d / 10;
        numPrinter(d);
        numPrinter(temp); 
    } else numPrinter(d);
    

    // //using %f format specifier
    // printf("Value of d = %d\n",temp);

    // //using %lf format specifier
    // printf("Value of d = %lf\n",d);
    return 0;
}