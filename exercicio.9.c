#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
   float altura,imc,peso;


   printf ("Digite a altura: ");
   scanf ("%f", &altura);

   printf ("Digite o peso: ");
   scanf ("%f", &peso);

   imc = peso/(altura*altura);

   if(imc < 18.5)
   {
       printf ("Abaixo do peso");
   }
else if (imc > 18.5 && imc < 25)
{
    printf ("Peso normal");
}
else if (imc > 25 && imc < 30)
{
    printf ("Acima do peso");
}
else if (imc > 30)
{
    printf ("Acima do peso");
}
else 
return 0;
}





