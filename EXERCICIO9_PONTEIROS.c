#include <stdio.h>

/*
    Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
    Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. 
    Imprima os valores das variáveis antes e após a modificação.
*/

int main()
{
    int x = 1;
    float y = 3.14;
    char letra = 'e';

    int *pointer1 = &x;
    float *pointer2 = &y;
    char *pointer3 = &letra;

    printf("Valores antes da modificacao:\n");
    printf("Inteiro = %d\n", x);
    printf("Real = %.2f\n", y);
    printf("Letra = %c\n", letra);

    *pointer3 = 'b';
    *pointer2 = 2.71;
    *pointer1 = 42;

    printf("\nValores depois da modificacao:\n");
    printf("Inteiro = %d\n", x);
    printf("Real = %.2f\n", y);
    printf("Letra = %c\n", letra);
}