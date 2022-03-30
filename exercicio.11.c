#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
float nota [4][4], total[4];
int i, b, c;

for (i = 0; i < 4; i++)
{
    printf ("\nDigite as notas dos alunos %d: ", i+1);
    for ( b = 0; b < 4; b++)
    {
        scanf ("%f", &nota[i][b]);
        total[i] += nota [1][b];
    }

}

for ( c = 0; c < 4; c++)
{
    printf ("A media do aluno de %d for de %.2f\n", c + 1, total[c]/4);

}
return 0;
}
