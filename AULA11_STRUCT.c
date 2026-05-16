//estrutura heterogênea que pode conter variáveis de diferentes tipos
//usar o operador seta caso voce esteja lidando com structure + alocacao dinamica de memoria ->, ah nao ser que sejam alocados varios intens, dai ao usar
// f[0], voce usa ".", f[0].nome por exemplo. f->nome

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

typedef struct {
    int codigo;
    char nome[50];
    float salario;
    int departamento;
    char cargo;
} Funcionario;

void main()
{

    //Pessoa pessoa;
    Funcionario funcionario;
    funcionario.codigo = 123;
   //Funcionario *f = (Funcionario*)malloc(5*sizeof(Funcionario));

    //f->cargo = 111;
   // printf("Cargo = %d\n, f->cargo");
    
    printf("Digite o nome: ");
    scanf("%[^\n]s", funcionario.nome);

    printf("Digite o salario: ");
    scanf("%f", &funcionario.salario);

    fflush(stdin);
    printf("Digite o cargo: ");
    scanf("%c", &funcionario.cargo);

    //printf("Digite o departamento: ");
    //scanf("%d", funcionario.departamento);

    printf("\n---- Dados do Funcionario ----");
    printf("\nCodigo: %d", funcionario.codigo);
    printf("\nNome: %s", funcionario.nome);
    printf("\nSalario: %f", funcionario.salario);
    printf("\nDepartamento: %d", funcionario.departamento);
    printf("\nCargo: %c", funcionario.cargo);

    /*
    printf("Digite o nome: ");
    scanf("%[^\n]s", pessoa.nome);


    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("%s tem %d anos.\n", pessoa.nome, pessoa.idade);
    */


}