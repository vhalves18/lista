#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int a,b,c;
    printf ("Digite o valor de A: ");
    scanf ("%d", &a);

    printf ("Digite o valor de B: ");
    scanf ("%d", &b);

    printf ("Digite o valor de C: ");
    scanf ("%d", &c);

    if (a >= b && a >= c && b >= c)
    {
        printf ("A ordem decrescente e: %d,%d,%d", a,b,c);
    }
    else if (b >= a && b>= c && a >= c)
    {
        printf ("A ordem decrescente e: %d,%d,%d", a,c,b);
    }
    else if (b >= a && b >= c && a >= c)
    {
        printf ("A ordem decrescente e: %d,%d,%d", b,a,c);
    }
    else if (b >= a && b >= c && c >= a)
    {
        printf ("A ordem decrescente e: %d,%d,%d", b,c,a);
    }
    else if (c >= a && c >= b && a >= b)
    {
        printf ("A ordem decrescente e: %d,%d,%d", c,a,b);
    }
    else if (c >= a && c >= b && b >= a )
    {
        printf ("A ordem decrescente e: %d,%d,%d", c,b,a);
    }
    else 
    return 0;
}



