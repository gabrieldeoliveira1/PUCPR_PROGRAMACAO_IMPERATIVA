#include <stdio.h>

int contarDigitos(int n, int acumulador)
{

    if(n < 10)
    {
        return acumulador;
    } else {
        return contarDigitos(n/10, acumulador + 1);
    }

}



int main()
{

    int numero;
    int digitos;

    printf("Digite um numero qualquer: ");
    scanf("%d", &numero);

    digitos = contarDigitos(numero, 1);

    printf("Result = %d", digitos);

}