#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    float saldo;
    

} Pix;


typedef struct
{

    char chave[50];

} Conta;

int main()
{
       
    
    Conta *conta = (Conta*)malloc(2*sizeof(Conta));
    Pix *pix = (Pix*)malloc(2*sizeof(Pix));

    char respo = ' ';
    int i;
    float valor_transacao;

    printf("Digite o saldo inicial da conta a enviar: ");
    scanf("%f", &pix[0].saldo);

    printf("Digite o saldo inicial da conta a receber: ");
    scanf("%f", &pix[1].saldo);

    printf("Digite a chave de envio: ");
    scanf(" %49[^\n]", &conta[0].chave);

    printf("Digite a chave de recebimento: ");
    scanf(" %49[^\n]", &conta[1].chave);

    while(respo != 'N' && respo != 'n')
    {

        printf("Digite o valor de envio: ");
        scanf("%f", &valor_transacao);
        if(valor_transacao > pix[0].saldo)
        {
            printf("Saldo insuficiente!");
        } else {
            pix[1].saldo = pix[1].saldo + valor_transacao;
            pix[0].saldo = pix[0].saldo - valor_transacao;
        }
        
        printf("O novo saldo da conta de envio eh: %.2f", pix[0].saldo);
        printf("\nO novo saldo da conta de recebimento eh: %.2f", pix[1].saldo);

        printf("\nDeseja transferir um novo valor? Digite N para sair.");
        scanf(" %c", &respo);

    }


    printf("O saldo final da conta %s de envio eh: %.2f", conta[0].chave, pix[0].saldo);
    printf("\nO saldo final da conta %s de recebimento eh: %.2f", conta[1].chave, pix[1].saldo);
    

   





}