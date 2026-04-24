#include <stdio.h>


int soma(int *vet, int tam, int acumulador)
{

    if(tam == 0)
    {
        return acumulador;
    }

    return soma(vet+1, tam-1, acumulador+vet[0]);

}

int main()
{

    int array[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &array[i]);
    }
    
    int resultado = soma(array, 5, 0);
    printf("O resultado da soma eh: %d", resultado);

}