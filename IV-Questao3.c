//Desenvolva uma struct "Produto" que contenha informações como nome, preço e quantidade em estoque. 
//Em seguida, desenvolva um menu para facilitar a escolha das opções:
//1 - Realizar uma compra
//2 - Consultar estoque
//3 - Sair do programa. 

//Escreva funções necessárias para calcular o valor total em estoque do produto e para atualizar a quantidade 
//em estoque com base em uma compra. Crie um programa que utiliza essas funções para um produto.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//(Tirar dúvida na próxima aula)
//typedef struct {
//char nome[50];
//float preco;
//int estoque;
//} Produto;

struct Produto
{
    char nome[50];
    float preco;
    int estoque;
};

// Função para consultar o estoque
void consultarEstoque(struct Produto produto,float total) {
printf("Produto: %s\n", produto.nome);
printf("Preço: R$%.2f\n", produto.preco);
printf("Quantidade em estoque: %i\n", produto.estoque);
total = produto.preco * produto.estoque;
printf("Valor total: %.2f\n", total);
}

int main() {
    setlocale(LC_ALL,"portuguese");
    // Inicializando o produto
    struct Produto produto;
    char nomeProduto[50];
    int quantidade;
    strcpy(produto.nome, "Celular");
    produto.preco = 50.00;
    produto.estoque = 100;
    float totalValor; 
    int opcao;
    


    printf("==========Bem-Vindo ao CelularMania==========\n");
    printf("Acesse o estoque para vizualizar os produtos\n");
    printf("Caso já saiba, venha comprar conosco\n");
    printf("O que deseja?\n\n");
    printf("1- Realizar uma compra\n");
    printf("2- Consultar estoque\n");
    printf("3- Sair do programa\n");

    // Loop para receber as escolhas do usuário
    do {
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) 
        {
            case 1:
        printf("Digite o nome do produto: ");
        scanf("%s", nomeProduto);

        // Verificando se o produto existe
        if (strcmp(produto.nome, nomeProduto) == 0) {
            printf("Digite a quantidade desejada: ");
            scanf("%i", &quantidade);

        // Verificando se a quantidade desejada está disponível no estoque
        if (quantidade <= produto.estoque) 
        {
            produto.estoque -= quantidade;
            printf("Compra realizada com sucesso!\n\n");
        } else {
            printf("Não há quantidade suficiente em estoque.\n");
        }
        } else {
            printf("Produto não encontrado.\n");
        }
                break;
            case 2:
                consultarEstoque(produto,totalValor);
                break;
            case 3:
                printf("Finalizado.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
