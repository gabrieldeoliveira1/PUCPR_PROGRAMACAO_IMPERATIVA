#include <stdio.h>

int troca(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}


int main()
{

    int a = 10;
    int b = 20;
    int resultado;


    printf("Valor do p1 antes da troca: %d", a);
    printf("\nValor do p2 antes da troca: %d", b);

    resultado = troca(&a, &b);

    printf("\nValor do p1 depois da troca: %d", a);
    printf("\nValor do p2 depois da troca: %d", b);

}