#include <stdio.h>


int soma(int *vetor, int tamanho)
{
    int resultado;

    if(tamanho == 0)
    {
        return 0;
    } else {
        resultado = vetor[tamanho - 1] + soma(vetor, tamanho - 1);
        return resultado;
    }
}

int main()
{
    int reais[5] = {1, 2, 3, 4, 5};
    int resultado; 

    resultado = soma(reais, 5);
    printf("A soma dos elementos do vetor eh: %d\n", resultado);

}