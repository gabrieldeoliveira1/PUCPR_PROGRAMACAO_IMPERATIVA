#include <stdio.h> //isto eh uma diretiva -> pre-processamento
#define MAX 10
#define DEBUG

//gerar macro
#define QUADRADO(x) ((x) * (x)) //sem tipagem
#define MAX(a,b) ((a) > (b) ? (a) : (b)) //descobrir o maior

void main()
{
    int a = 10;
    int b = 20;
    #ifdef DEBUG //se definido
        printf("%d", QUADRADO(a));
    #endif

    #ifdef DEBUG 
        printf("\n%d", MAX(a,b));
    #endif

/*
    #if MAX > 50
        printf("MAX > 50");
    #elif MAX > 100
        printf("MAX > 100");
    #else 
        printf("\nELSE");
    #endif
*/


}