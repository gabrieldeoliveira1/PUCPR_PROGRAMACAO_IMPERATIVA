#include <stdio.h>
#include <string.h>

char inverter(char *palav, int inicio, int fim)
{

    if(inicio >= fim)
    {
        return; 
    }

    char temp = palav[inicio];
    palav[inicio] = palav[fim];
    palav[fim] = temp; 

    inverter(palav, inicio+1, fim-1);
}

int main()
{
    
    char palavra[] = "Gabriel";
    int tamanho = strlen(palavra);

    printf("Original: %s", palavra);

    inverter(palavra, 0, tamanho - 1);

    printf(" ---- Inversa: %s\n", palavra);


}