#include <stdio.h>


int main()
{

    int a = 10;
    int b = 20;
    int c = 30;

    int *pointer = &a;
    printf("Valor de a: %d\n", *pointer);
    
    pointer = &b;
    printf("Valor de b: %d\n", *pointer);

    pointer = &c;
    printf("Valor de c: %d\n", *pointer);
}