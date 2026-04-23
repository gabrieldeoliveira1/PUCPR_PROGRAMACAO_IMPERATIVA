#include <stdio.h>
#include <stdlib.h>

int max(int n, int *v)
{   

    int *vetor = v;
    int i, maior;

    if(n == 1)
    {
        return v[0]; 
    }
    
    maior = max(n-1, v);

    if(v[n-1] > maior)
    {
        maior = v[n-1];
        return maior;
    }else
    {
        return maior;
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

    int maior = max(tamanho, vetor);

    printf("\nO maior eh: %d", maior);
}