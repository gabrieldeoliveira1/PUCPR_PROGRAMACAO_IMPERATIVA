#include <stdio.h>

/*
    Crie um programa que contenha uma matriz de float contendo três linhas e três colunas. 
    Imprima o endereço de cada posição dessa matriz.
*/

int main()
{
    float matriz[3][3] = {1.1, 2.2, 3.3,
                          4.4, 5.5, 6.6,
                          7.7, 8.8, 9.9};
    
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j <3; j++)
        {
            printf("Endereco da matriz[%d][%d] = %p\n", i, j, &matriz[i][j]);
        }
    }
}