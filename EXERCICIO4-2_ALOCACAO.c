#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet;
    int i, n;

    printf("Digite o tamanho do vetor desejado: ");
    scanf("%d", &n);

    vet = (int*)malloc(n * sizeof(int));

    for(i = 0; i < n; i++)
    {
        printf("Valor %d: ", i+1);
        scanf("%d", (vet+i));
    }

    printf("\n--- MOSTRANDO VALORES ---");
    printf("\n");

    for(i = 0; i < n; i++)
    {
        printf("[%2d] ", vet[i]);
    }
}