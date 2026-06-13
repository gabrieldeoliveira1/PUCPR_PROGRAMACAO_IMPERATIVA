#include <stdio.h>

void main()
{
    int a = 67;
    char str[50];
    FILE *arquivo; //obrigatoria essa estrutura

    arquivo = fopen("teste.txt", "a+"); 
    
    if(arquivo != NULL){
        //printf("Arquivo aberto corretamente.");
        //fprintf(arquivo, "20+20+20+7, ai eh muito facil professora, eh %d", a);
        fgets(str, 50, arquivo); //scanf ate achar um /n
        printf("Lido do arquivo = %s", str);
        fclose(arquivo);
    } else {
        printf("Nao foi possivel abrir o arquivo");
    }


}