#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b, c; 

    printf ("Digite o valor de A: ");
    scanf ("%d", &a);

    printf ("Digite o valor de B: ");
    scanf ("%d", &b);

    printf ("Digite o valor de C: ");
    scanf ("%d", &c);

    if ((a+b < c))
    {
        printf ("a + b tem o valor menor do que c");
    }
    else 
    {
        printf ("a + b tem o valor maior do que c");
    }
    return 0; 
}
