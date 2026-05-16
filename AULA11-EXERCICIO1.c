#include <stdio.h>


typedef struct{

    char nome[5][50];
    float peso[5];
    float altura[5];
    float imc[5];

} Esportista; 

int main()
{

    Esportista esportista;

    int i;

    for(i = 0;i < 5; i++)
    {
        printf("Digite o nome do esportista %d: ", i + 1);
        scanf(" %49[^\n]", esportista.nome[i]);
    }

    for(i = 0;i < 5; i++)
    {
        printf("Digite o peso do esportista %d: ", i+1);
        scanf("%f", &esportista.peso[i]);
    }


    for(i = 0;i < 5; i++)
    {
        printf("Digite a altura (em metros) do esportista %d: ", i+1);
        scanf("%f", &esportista.altura[i]);
    }

    for(i = 0;i < 5; i++)
    {
        esportista.imc[i] =  esportista.peso[i] / (esportista.altura[i] * esportista.altura[i]);
    }


    for(i = 0; i < 5; i++)
    {
        printf("O IMC do atleta %d eh: %.2f\n", i+1, esportista.imc[i]);
    }
}