#include <stdio.h>

/*
    Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.
*/


int main()
{
    int x = 20;
    int y = 20;

    int *ptr1 = &x; // Ponteiro para x
    int *ptr2 = &y; // Ponteiro para y

    printf("Endereco de ptr1: %p\n", ptr1);
    printf("Endereco de ptr2: %p\n", ptr2);

    if(ptr1 > ptr2)
    {
        printf("O endereco de ptr1 e maior que o endereco de ptr2\n");
    }
    else if(ptr1 < ptr2)
    {
        printf("O endereco de ptr1 e menor que o endereco de ptr2\n");
    }
    else
    {
        printf("O endereco de ptr1 e igual ao endereco de ptr2\n");
        printf("Isso nao pode acontecer porque duas variaveis distintas tem, obrigatoriamente, endereços diferentes.\n");
    }
}