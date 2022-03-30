#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    int opcao;
    float valor; 
    float valorfinal; 

    printf ("\n=================\n");
    printf ("O valor a ser pago é de 300 reais");
    printf ("\n==================\n");

    printf ("Escolha uma opcao abaixo: \n\n1- Dinheiro ou cheque\n2- A vista no cartao de credito\n3- Duas vezes mais juros de 10 porcento\n4 Sair \n\nOpcao: ");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1:
    valorfinal = valor - (valor * 0.1);
    printf ("O valor será de: %2.f", valorfinal);

        break;
    case 2: 
    valorfinal = valor - (valor * 0.15);
    printf ("O valor será de: %2.f", valorfinal);

        break;
    case 3:
    valorfinal = 2/(valor + (valor *0.1));
    printf ("O valor será de: %2.f", valorfinal);
        break;
    case 4:
        return 0;
        break;
    default:
        printf ("Opcao invalida. \n");
        system ("pause");
        system ("cls");
    }
    return 0;
}

