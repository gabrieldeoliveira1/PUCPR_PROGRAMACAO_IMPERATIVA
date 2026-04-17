#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[10] = {0,0,0,0,0,0,0,0,0,0};
    int *pos = vetor; 
    int i;

    for(i = 0; i < 10; i++)
    {
    printf("Insira um valor: ");
    scanf("%d", (pos+i));
    }
    
    for(i = 0; i < 10; i++)
    {
        vetor[i] = *(pos+i);
    }

    printf("\nO vetor final eh: \n");
    printf("\nVetor: ");

    for(i = 0; i < 10; i++)
    {
        printf("[%d]", vetor[i]);
    }
    
}