#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    char sexo; 
    int estadoCivil;
    int anosCasado;
    
    printf ("Digite o seu sexo M para masculino ou F para feminino: ");
    scanf ("%c", &sexo);
    printf ("Digite o seu estado civil(1- casado e 2- solteiro): ");
    scanf ("%i", &estadoCivil);

    if (sexo == 'F')
    {
        printf ("voce é mulher: ");
        if (estadoCivil == 1)
        {
            printf ("\nDigite quantos anos de casado voce tem: ");
            scanf ("%d", &anosCasado);
        }
    }
    else if (sexo == 'F')
    {
        printf("voce é mulher: ");
    }

    else if (sexo == 'M')
    {
        printf ("voce é homem");
    }
    else 
    {
        printf ("sexo não reconhecido");
    }
    return 0;
}


