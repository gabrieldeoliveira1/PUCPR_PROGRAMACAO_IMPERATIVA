#include <stdio.h>

int main()
{
    int vetor[5] = {0,0,0,0,0};
    int *pointer = vetor;
    int i; 

    for(i = 0; i < 5; i++)
    {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", (pointer + i));
    }

    for(i = 0; i < 5; i++)
    {
        *(pointer + i) = *(pointer+i) * 2;
    }

    printf("Vetor dobrado: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(pointer + i));
    }
    printf("\n");
}