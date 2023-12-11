//Crie uma struct Contato para representar informações de contatos, 
//incluindo nome, número de telefone e email. Solicite que o usuário cadastre 3 contatos. 
//Escreva uma função que recebe um array de contatos e um nome como parâmetro,
//e retorna o número de telefone correspondente a esse nome.
//Em seguida, implemente um programa que utiliza essa função para buscar e 
//imprimir o número de telefone de um contato específico.

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
    printf("Solitando informações de contato\n");
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
            printf("Número respectivo: %s",contato[i].telefone);
            break;
        }
    }
    printf("Contato não encontrado");
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
        printf("Digite o %iº nome: ",i+1);
        gets(pessoas[i].nome);

        printf("Digite o %iº telefone: ",i+1);
        gets(pessoas[i].telefone);
    
        printf("Digite o %iº email: ",i+1);
        gets(pessoas[i].email);
        system("cls || clear");
    }
    printf("Digite um nome para busca: ");
    gets(contatoDesejado);

    buscando(pessoas,contatoDesejado);

    return 0;
}