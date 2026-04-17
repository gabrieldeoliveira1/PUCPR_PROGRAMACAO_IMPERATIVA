#include <stdio.h>
#include <stdlib.h>

void copiar(int *pointer1, int *pointer2, int a, int b)
{
    int i;
    int *temp = pointer2;

    for(i = 0; i < a && i < b; i++)
    {
        pointer2[i] = pointer1[i];
        pointer1[i] = temp[i];
    }

    printf("\n");

    printf("Vetor 1 copiado para vetor 2: ");
    for(i = 0; i < a && i < b; i++)
    {
        printf("%d ", pointer2[i]);
    }
    
    printf("\n");

    printf("Vetor 2 copiado para vetor 1: ");
    for(i = 0; i < a && i < b; i++)
    {
        printf("%d ", pointer1[i]);
    }
}


int main()
{
    int tamanho1, tamanho2, i; 
    int *p1, *p2;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tamanho1);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tamanho2);

    printf("\n");

    p1 = (int*)malloc(tamanho1 * sizeof(int));
    p2 = (int*)malloc(tamanho2 * sizeof(int));


    for(i = 0; i < tamanho1; i++)
    {
        p1[i] = i + 1;
    }

    for(i = 0; i < tamanho2; i++)
    {
        p2[i] = i + 2;
    }

    printf("Vetor 1: ");
    for(i = 0; i < tamanho1; i++)
    {
        printf("%d ", p1[i]);
    }

    printf("\n");

    printf("Vetor 2: ");
    for(i = 0; i < tamanho2; i++)
    {
        printf("%d ", p2[i]);
    }

    printf("\n");

    copiar(p1, p2, tamanho1, tamanho2);

    free(p1);
    free(p2);
}