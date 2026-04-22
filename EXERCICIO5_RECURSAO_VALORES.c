#include <stdio.h>

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    } else if(n == 1){
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}



int main()
{

    int num;
    int resultado;

    printf("Digite o n-esimo termo: ");
    scanf("%d", &num);

    resultado = fib(num);
    printf("%d", resultado);


}