#include <stdio.h>
#include <stdio.h>



int main()
{

    int colunas, linhas;
    int **matriz;
    int i, j;
    int valor;


    printf("Digite o numero de linhas:");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);


    matriz = (int**)malloc(linhas * sizeof(int*));

    for(i = 0; i < linhas; i++)
    {
        matriz[i] = (int*)malloc(colunas * sizeof(int*));
    }

    printf("\n---- PREENCHA A MATRIZ ----");
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            printf("\nElemento [%d][%d]: ", i, j);
            scanf("%d", &valor);

            matriz[i][j] = valor;
        }
    }


    printf("\n---- MOSTRANDO A MATRIZ ----\n");
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            printf("[%2d]", matriz[i][j]);
        }
        printf("\n");
    }
}