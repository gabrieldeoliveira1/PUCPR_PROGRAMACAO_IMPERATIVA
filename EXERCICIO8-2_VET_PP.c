#include <stdio.h>

int main()
{

    int vet[10] = {0,0,0,0,0,0,0,0,0,0};
    int *p = &vet[0];
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", (p + i));
    }

    for(i = 0; i < 10; i++)
    {
        vet[i] = p[i]; 
    }

    for(i = 9; i >= 0; i--)
    {
        printf("%d ", vet[i]);
    }

}