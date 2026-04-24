#include <stdio.h>

float soma(float *reais, int tam)
{   

    if(tam == 1)
    {
        return reais[0];
    } else {
        return reais[tam-1] + soma(reais, tam-1);
    }
}


int main()
{

    float reais[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    float resultado = soma(reais, 5);

    printf("A soma eh: %.2f", resultado);

}