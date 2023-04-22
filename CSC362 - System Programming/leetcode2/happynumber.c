#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
    false,
    true
} bool;


int main(int argc, char const *argv[])
{
    int n = 4;
    int output = climbStairs(n);
    printf("%d", output);
    
    return 0;
}
