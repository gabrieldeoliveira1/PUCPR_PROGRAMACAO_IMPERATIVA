#include <stdio.h>

int contarDigitos(int n)
{
    if(n < 10)
    {
        return 1;
    } else {
        return 1 + contarDigitos(n/10);
    }
}

int main()
{
    int numero;
    int digitos;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    digitos = contarDigitos(numero);

    printf("O numero %d tem %d digitos.\n", numero, digitos);
    
}