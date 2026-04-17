#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int x, i, multiplos = 0;
    int *p;

    p = (int*)malloc(n * sizeof(int));

    for(i = 0; i < n;i++)
    {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", (p+i));
    }

    printf("Digite o valor inteiro: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(*(p+i) % x == 0)
        {
            multiplos++;
        }
    }

    printf("Quantidade de multiplos de %d: %d\n", x, multiplos);

    free(p);
    
}