//Modele uma struct "ContaBancaria" que represente uma conta banc�ria com n�mero da conta, 
//nome do titular, saldo e tipo de conta (poupan�a ou corrente). Implemente fun��es para depositar e 
//sacar dinheiro da conta, bem como para imprimir o saldo atual. Crie um programa que utilize essas fun��es 
//para simular opera��es banc�rias. Crie um menu para as opera��es dispon�veis.


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
        printf("(Caso n�o tenha conta, crie uma nova)\n");
        printf("O que deseja realizar?\n");
        printf("1 - Criar conta nova\n");
        printf("2 - Dep�sito \n");
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

            printf("N�mero da conta: ");
            gets(informacoesBancarias.numero);

            printf("Tipo de conta: ");
            gets(informacoesBancarias.tipo);

            printf("Informe o saldo atual: ");
            scanf("%f", &informacoesBancarias.saldo);

            system("cls || clear");

            break;
        
        case 2:
            printf("Quanto voc� deseja depositar: ");
            scanf("%f", &informacoesBancarias.depositado);

            depositoAtualizado = depositar(informacoesBancarias.saldo, informacoesBancarias.depositado);

            printf("Nome do titular: %s\n", informacoesBancarias.nome);
            printf("N�mero da conta: %s\n", informacoesBancarias.numero);
            printf("Tipo da conta: %s\n", informacoesBancarias.tipo);
            printf("Saldo pr�-dep�sito: %.2f\n", informacoesBancarias.saldo);
            printf("Saldo atual da conta: %.2f\n\n", depositoAtualizado);

            break;

        case 3:
            printf("Quanto voc� deseja sacar: ");
            scanf("%f", &informacoesBancarias.transferencia);

            saqueAtualizado = sacar(informacoesBancarias.saldo, informacoesBancarias.transferencia);

            printf("Titular: %s\n", informacoesBancarias.nome);
            printf("N�mero da conta: %s\n", informacoesBancarias.numero);
            printf("Conta %s\n", informacoesBancarias.tipo);
            printf("Saldo pr�-saque: %.2f\n", informacoesBancarias.saldo);
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