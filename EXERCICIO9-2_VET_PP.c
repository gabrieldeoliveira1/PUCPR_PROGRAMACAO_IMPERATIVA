#include <stdio.h>


int maior(int *p, int tam)
{
    int i;
    int maior = p[0];

    for(i = 1; i < tam; i++)
    {
        if(p[i] > maior){
            maior = p[i];
        }
    }

    return maior;
}

int main()
{
    int vet[5] = {1,500,10,4,5};
    int i;
    int *p;
    int result;

    p = vet; 

    result = maior(p, 5);

    printf("O maior eh: %d", result);
}