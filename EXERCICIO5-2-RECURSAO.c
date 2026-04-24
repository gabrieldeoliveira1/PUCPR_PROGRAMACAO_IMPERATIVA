#include <stdio.h>

int fib(int n)
{
    
    if(n == 0)
    {
        return 0;
    }

    if(n == 1)
    {
        return 1; 
    }

    return fib(n-2) + fib(n-1);
}               

int main()
{

    int n;

    printf("Digite o n-esimo termo: ");
    scanf("%d", &n);

    int fibo = fib(n);

    printf("O valor de fibonacci para o seu n-esimo termo eh: %d", fibo);
}