#include <stdio.h>

int main()
{
    float notas[4] = {0.0, 0.0, 0.0, 0.0};
    int i;

    for(i = 0; i < 4; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;

    if(media >= 7.0)
    {
        printf("Aluno Aprovado com media %.2f\n", media);
    }
    else
    {
        printf("Aluno Reprovado com media %.2f\n", media);
    }
}
