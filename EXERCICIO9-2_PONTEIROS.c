#include <stdio.h>


int main()
{

    int inteiro = 5;
    float real = 5.5;
    char letra = 'c';
    
    printf("--- ANTES DA MODIFICACAO ---");

    printf("\nINTEIRO: %d", inteiro);
    printf("\nREAL: %.1f", real);
    printf("\nCHAR: %c\n", letra);

    int *pointer1 = &inteiro;
    int *pointer2 = &real;
    int *pointer3 = &letra;

    *pointer1 = 7;
    *pointer2 = 7.7;
    *pointer3 = 's';

    printf("--- DEPOIS DA MODIFICACAO ---");

    printf("\nINTEIRO: %d", *pointer1);
    printf("\nREAL: %.1f", *pointer2);
    printf("\nCHAR: %c\n", *pointer3);
}