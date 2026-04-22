#include <stdio.h>
#include <stdlib.h>


int main()
{

    int num_alunos;
    int *matricula;
    char *sobrenomes;
    char *nascimento;
    int i; 

    printf("Digite o numero de alunos: ");
    scanf("%d", &num_alunos);

    matricula = (int*)malloc(num_alunos * sizeof(int));
    sobrenomes = (char*)malloc(num_alunos * sizeof(char) * 51); // 50 caracteres + 1 para o caractere nulo 
    nascimento = (char*)malloc(num_alunos * sizeof(char) * 11); // 10 caracteres + 1 para o caractere nulo

    printf("Digite os sobrenomes dos alunos:\n");
    for(i = 0; i < num_alunos; i++)
    {
        printf("Sobrenome do aluno %d: ", i + 1);
        scanf("%s", &sobrenomes[i*51]);
    }

    printf("Digite as matriculas dos alunos:\n");
    for(i = 0; i < num_alunos; i++)
    {
        printf("Matricula do aluno %d: ", i + 1);
        scanf("%d", &matricula[i]);
    }

    printf("Digite as datas de nascimento dos alunos:\n");
    for(i = 0; i < num_alunos; i++)
    {
        printf("Data de nascimento do aluno %d (dd/mm/aaaa): ", i + 1);
        scanf("%s", &nascimento[i*11]);
    }

    printf("\n------DADOS DOS ALUNOS------\n");
    for(i = 0; i < num_alunos; i++)
    {
        printf("Sobrenome do aluno %d: %s --- ", i+1, &sobrenomes[i * 51]);
        printf("Matriculado do auno %d: %d --- ", i+1, matricula[i]);
        printf("Data de nascimento do aluno %d: %s", i+1, &nascimento[i * 11]);
        printf("\n");
    }
}