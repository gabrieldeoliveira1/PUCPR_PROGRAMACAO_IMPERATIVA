#include <stdio.h>

int main()
{
    
    int vetor[5] = {0,0,0,0,0};
    int *pointer = vetor;
    int i;

    for(i = 0; i < 5; i++)
    {
        *(pointer + i) = i + 1;
    }

    printf("Vetor: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(pointer + i));
    }

}