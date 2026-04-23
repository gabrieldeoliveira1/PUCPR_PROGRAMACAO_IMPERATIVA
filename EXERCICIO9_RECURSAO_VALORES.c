#include <stdio.h>

int elevado(int a, int b)
{

    if(a == 0)
    {
        return 0;
    }

    if(b == 0)
    {
        return 1;
    }

    return a * elevado(a, b-1);


}


int main()
{
    int valor;
    int expo;
    int result; 

    printf("Digite o valor: ");
    scanf("%d", &valor);

    printf("Digite o expoente: ");
    scanf("%d", &expo);

    result = elevado(valor, expo);

    printf("\nValor original: %d", valor);
    printf("\nValor da exponenciacao: %d", result);

    


}