//Modele uma struct "ContaBancaria" que represente uma conta bancária com número da conta, 
//nome do titular, saldo e tipo de conta (poupança ou corrente). Implemente funções para depositar e 
//sacar dinheiro da conta, bem como para imprimir o saldo atual. Crie um programa que utilize essas funções 
//para simular operações bancárias. Crie um menu para as operações disponíveis.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct contaBancaria {
    char nome[200], numero[200], tipo[200];
    float saldo, transferencia, depositado;
};

float depositar (float valorInicial, float valorDeposito) {
    return valorInicial + valorDeposito;
}

float sacar (float valorInicial, float valorSaque) {
    return valorInicial - valorSaque;
}

int main ( ) {
    setlocale(LC_ALL,"portuguese");

    int opcao;
    float depositoAtualizado, saqueAtualizado;
    struct contaBancaria informacoesBancarias;


    do {
        printf("Bem-Vindo ao banco 100Money\n");
        printf("(Caso não tenha conta, crie uma nova)\n");
        printf("O que deseja realizar?\n");
        printf("1 - Criar conta nova\n");
        printf("2 - Depósito \n");
        printf("3 - Saque\n");
        printf("4 - Sair do programa\n");
        printf("Resposta: ");
        scanf("%d", &opcao);

        system("cls||clear");

        switch (opcao) {
        case 1:
            fflush(stdin);

            printf("Nome do titular: ");
            gets(informacoesBancarias.nome);

            printf("Número da conta: ");
            gets(informacoesBancarias.numero);

            printf("Tipo de conta: ");
            gets(informacoesBancarias.tipo);

            printf("Informe o saldo atual: ");
            scanf("%f", &informacoesBancarias.saldo);

            system("cls || clear");

            break;
        
        case 2:
            printf("Quanto você deseja depositar: ");
            scanf("%f", &informacoesBancarias.depositado);

            depositoAtualizado = depositar(informacoesBancarias.saldo, informacoesBancarias.depositado);

            printf("Nome do titular: %s\n", informacoesBancarias.nome);
            printf("Número da conta: %s\n", informacoesBancarias.numero);
            printf("Tipo da conta: %s\n", informacoesBancarias.tipo);
            printf("Saldo pré-depósito: %.2f\n", informacoesBancarias.saldo);
            printf("Saldo atual da conta: %.2f\n\n", depositoAtualizado);

            break;

        case 3:
            printf("Quanto você deseja sacar: ");
            scanf("%f", &informacoesBancarias.transferencia);

            saqueAtualizado = sacar(informacoesBancarias.saldo, informacoesBancarias.transferencia);

            printf("Titular: %s\n", informacoesBancarias.nome);
            printf("Número da conta: %s\n", informacoesBancarias.numero);
            printf("Conta %s\n", informacoesBancarias.tipo);
            printf("Saldo pré-saque: %.2f\n", informacoesBancarias.saldo);
            printf("Saldo atual: %.2f\n\n", saqueAtualizado);

            break;
        
        case 4:
            system("cls || clear");
            printf("Finalizado");
            break;

        default:
            break;
        }
    } while (opcao != 4);

    return 0;
}