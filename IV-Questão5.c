//Crie uma struct "Funcionario" com membros para nome, cargo e sal�rio. 
//Escreva uma fun��o que recebe um array de funcion�rios e um cargo como par�metro, 
//e retorna a m�dia salarial dos funcion�rios com esse cargo. 
//Em seguida, implemente um programa que utiliza essa fun��o para calcular e imprimir a m�dia salarial
//dos programadores em uma empresa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 200

struct funcionarioDados
{
    char nome[200], cargo[200];
    float salario;
};

float media(struct funcionarioDados funcionarios[])
{
    int i, j;
    float soma, resultado;

    for (j = 0; j < TAM; j++)
    {
        if (strcmp(funcionarios[i].cargo, "Desenvolvedor") == 0)
        {
            j++;
            soma += funcionarios[i].salario;
        }
    }
    resultado = soma / (float)j;
    return resultado;
}

int main()
{

    int opcao, i;
    
    struct funcionarioDados funcionarios[TAM];

    do
    {
        printf("Bem-Vindo ao Setor Observat�rio Singular\n");
        printf(" 1 - Adicionar Informa��es\n");
        printf(" 2 - Exibir Informa��es\n");
        printf(" 3 - Finalizar programa\n");
        printf("R: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Digite o nome do %d� funcion�rio: ", i + 1);
            gets(funcionarios[i].nome);

            printf("Digite o nome do cargo: ");
            gets(funcionarios[i].cargo);

            printf("Digite o valor do salario: ");
            scanf("%f", &funcionarios[i].salario);

            system("cls||clear");

            break;
        case 2:
            printf("M�dia salarial: R$ %.2f\n", media(funcionarios));
            break;
        }

    } while (opcao != 3);

    return 0;
}