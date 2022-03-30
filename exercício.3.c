#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    int num;

    printf ("Digite um numero para se ele é impar ou par: ");
    scanf ("%d", &num);

    if (num % 2 == 0)
    {
        printf ("o numero é PAR");
    }
    else 
    {
        printf ("o numero é IMPAR");
    }
    return 0;
}