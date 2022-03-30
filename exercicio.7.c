#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    int num;
    if (num % 2 == 0)
    {
        printf ("valor PAR e: %d", num + 5);
    }
    else if (num % 2 == 1)
    {
        printf ("O valor impar e: %d", num + 8);
    }
    else 
    return 0; 
}
