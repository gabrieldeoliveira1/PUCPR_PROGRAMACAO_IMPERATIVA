#include <stdio.h>
#include <stdlib.h>

int max(int tam, int *vet, int acumulador)
{   

    if(tam == 1)
    {
        return acumulador;
    } else {
        if(acumulador < vet[tam-1]){
            acumulador = vet[tam-1];
        }
        
        return max(tam - 1, vet, acumulador);
    }
}

int main()
{

    int tamanho, i;
    int *vetor;

    printf("Digite a quantidade de numeros que voce gostaria de inserir: ");
    scanf("%d", &tamanho);

    vetor = (int*)malloc(tamanho * sizeof(int));

    for(i = 0; i < tamanho; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", (vetor + i));
    }

    for(i = 0; i < tamanho; i++)
    {
        printf("[%d] ", *(vetor + i));
    }

    int maior = max(tamanho, vetor, vetor[0]);

    printf("\nO maior eh: %d", maior);

    free(vetor);

}