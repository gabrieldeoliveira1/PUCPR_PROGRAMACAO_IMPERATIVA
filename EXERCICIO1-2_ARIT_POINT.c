#include <stdio.h>


int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int valores[3]; 
    int i;

    int *pointer = valores;

    pointer = &a;
    pointer = &b;
    pointer = &c;

    for(i = 0; i < 3; i++){
        printf("O ponteiro eh: %d\n", *(pointer + i));
    }
}