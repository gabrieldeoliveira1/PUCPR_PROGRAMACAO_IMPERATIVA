#include <stdio.h>


void trocarvalores(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("Valor de pointer1 depois da troca: %d\n", *p1);
    printf("Valor de pointer2 depois da troca: %d\n", *p2);
}

int main()
{

    int a = 10;
    int b = 20;

    int *pointer1 = &a;
    int *pointer2 = &b;

    printf("Valor de pointer1 antes da troca: %d\n", *pointer1);
    printf("Valor de pointer2 antes da troca: %d\n", *pointer2);

    trocarvalores(pointer1, pointer2);

    return 0; 
}