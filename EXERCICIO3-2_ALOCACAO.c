#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p;
    int i;

    p = (int*)malloc(5 * sizeof(int));

    for(i = 0; i < 5; i++)
    {
        printf("Insira o valor %d: ", i+1);
        scanf("%d", (p+i));
    }

    printf("\n--- MOSTRANDO ESCOLHAS ---");
    printf("\n");
    
    for(i = 0; i < 5; i++)
    {
        printf("[%d] ", p[i]);
    }

    free(p);
    

}