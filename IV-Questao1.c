//Crie uma struct Contato para representar informa��es de contatos, 
//incluindo nome, n�mero de telefone e email. Solicite que o usu�rio cadastre 3 contatos. 
//Escreva uma fun��o que recebe um array de contatos e um nome como par�metro,
//e retorna o n�mero de telefone correspondente a esse nome.
//Em seguida, implemente um programa que utiliza essa fun��o para buscar e 
//imprimir o n�mero de telefone de um contato espec�fico.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 3

struct contato
{
    char nome[200];
    char telefone[15];
    char email[200];
};

void cabecalho()
{
    printf("Solitando informa��es de contato\n");
    printf("================================\n");
    printf("====Siga com os dados abaixo====\n");
}

char* buscando(struct contato contato[],char* contatoDesejado)
{
    int i;
    for (i = 0; i < TAM; i++)
    {
        if (strcmp(contato[i].nome, contatoDesejado) == 0)
        {
            printf("N�mero respectivo: %s",contato[i].telefone);
            break;
        }
    }
    printf("Contato n�o encontrado");
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    struct contato pessoas[TAM];
    char contatoDesejado[200];
    int i;

    cabecalho();
    for ( i = 0; i < TAM; i++)
    {
        printf("Digite o %i� nome: ",i+1);
        gets(pessoas[i].nome);

        printf("Digite o %i� telefone: ",i+1);
        gets(pessoas[i].telefone);
    
        printf("Digite o %i� email: ",i+1);
        gets(pessoas[i].email);
        system("cls || clear");
    }
    printf("Digite um nome para busca: ");
    gets(contatoDesejado);

    buscando(pessoas,contatoDesejado);

    return 0;
}