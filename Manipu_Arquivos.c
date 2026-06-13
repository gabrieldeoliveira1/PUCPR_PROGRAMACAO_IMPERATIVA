#include <stdio.h>

void main()
{
    int a = 67;
    FILE *arquivo; //obrigatoria essa estrutura

    arquivo = fopen("teste.txt", "w"); 
    
    if(arquivo != NULL){
        printf("Arquivo aberto corretamente.");
        fprintf(arquivo, "20+20+20+7, ai eh muito facil professora, eh %d", a);
        fclose(arquivo);
    } else {
        printf("Nao foi possivel abrir o arquivo");
    }


}