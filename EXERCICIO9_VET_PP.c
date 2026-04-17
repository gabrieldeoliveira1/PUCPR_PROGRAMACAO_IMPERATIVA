#include <stdio.h>
#include <stdlib.h>

void encontrarMaior(int *vetor)
{   

    //TEM QUE TERMINAR

    int vet = *vetor;
    int maior;
    int i;

    for(i = 0; i < 5; i++)
    {
        if(*(vetor+i) > maior)
        {
            maior = *(vetor+i);
        }
    }
}

int main()
{
    int vet[5] = {0,0,0,0,0};
    int *vetor;
    int i;

    vetor = (int*) malloc(5 * sizeof(int));

    
    for(i = 0; i < 5; i++)
    {
        printf("Insira 5 valores: \n");
        scanf("%d", (vetor+i));
    }

    printf("Preenchendo vetor: \n");
    printf("-------------------\n");

    for(i = 0; i < 5; i++)
    {
        vet[i] = *(vetor+i);
    }

    encontrarMaior(vetor);
}