#include <stdio.h>
#include <stdlib.h>

int** alocar(int m, int n)
{

    int **matriz;
    int i;

    matriz = (int**)malloc(m*sizeof(int*));

    for(i = 0; i < m; i++)
    {
        matriz[i] = (int*)malloc(n*sizeof(int));
    }

    return matriz; 


}

void liberar(int **matriz, int m)
{
    int i;

    for(i = 0; i < m; i++)
    {
        free(matriz[i]);
    }

    free(matriz);

}


int main()
{
    int m, n, i, j;

    printf("Digite o numero de colunas: ");
    scanf("%d", &m);

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    int **matriz = alocar(m, n);

    int contador = 1;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            matriz[i][j] = contador++;
        }
    }

    printf("\n\n");
    printf("--- PRINTANDO MATRIZ ---");
    printf("\n\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("[%2d] ", matriz[i][j]);
        }
        printf("\n");
    }

    liberar(matriz, m);
    
}