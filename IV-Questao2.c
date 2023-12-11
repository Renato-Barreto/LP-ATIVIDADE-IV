//Crie uma fun��o chamada "calcularMedia" que recebe como par�metro uma struct "Aluno", 
//esta struct ter� informa��es como: nome, data de nascimento, duas notas e m�dia e retorna a m�dia das notas. 
//Em seguida, crie um programa que declare um array de 5 alunos e utilize a fun��o "calcularMedia" para 
//imprimir a m�dia de cada aluno. Tamb�m crie uma fun��o para verificar se um aluno est� aprovado ou reprovado 
//sendo necess�rio m�dia maior ou igual a 7,0 para aprova��o.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

// Declarando constantes, struct e fun��es

#define MAX_CHARACTER 250
#define MAX_NOTE 2
#define MAX_DATA 5

struct escola {
    char dataDeNascimento[MAX_CHARACTER];
    char nome[MAX_CHARACTER];
    float nota[MAX_NOTE];
    float mediaEscola;
};
void titulo ( ) {
    system ("cls || clear");
    printf ("Bem-Vindo ao DevSchool++\n\n");
}
float mediaFinal (float numero[]) {
    int i;
    float soma = 0, media;

    for (i = 0; i < MAX_NOTE; i++) {
        soma += numero[i];
    }
    return media = soma / (float) MAX_NOTE;
}
char* conceito (float valor) {
    char classe[MAX_CHARACTER];

    if (valor >= 7) {
        strcpy (classe, "Aprovado");
    
    } else {
        strcpy (classe, "Reprovado"); }
    
    return classe;
}
int main ( ) {
    setlocale (LC_ALL, "portuguese");

    //Declarando vari�veis

    int a, b;
    struct escola estudante[MAX_DATA];

    //Solicitando dados

    titulo ( );
    for (a = 0; a < MAX_DATA; a++) {
        printf ("Digite o nome do %d� estudante: ", a+1);
        gets (estudante[a].nome);
        printf ("Digite a data de nascimento do estudante: ");
        gets (estudante[a].dataDeNascimento);

        for (b = 0; b < MAX_NOTE; b++) {
            do {
                printf ("Digite a %d� nota: ", b+1);
                scanf ("%f", &estudante[a].nota[b]);

                if (estudante[a].nota[b] < 0 || estudante[a].nota[b] > 10) {
                    printf ("\nNOTA INV�LIDA! Por favor, informe uma nota entre 0 e 10\n\n"); }

            } while (estudante[a].nota[b] < 0 || estudante[a].nota[b] > 10);
        }
        fflush (stdin);
        printf ("\n");
    
        estudante[a].mediaEscola = mediaFinal(estudante[a].nota);
    }

    //Mostrando Resultado

    titulo ( );
    for (a = 0; a < MAX_DATA; a++) {
        printf ("Nome do %d� estudante: %s\n\n", a+1, estudante[a].nome);
        printf ("Data de nascimento do estudante: %d\n", estudante[a].dataDeNascimento);

        for (b = 0; b < MAX_NOTE; b++) {
            printf ("%d� nota: %.2f\n", b+1, estudante[a].nota[b]);
        }
        printf ("M�dia: %.2f\n", estudante[a].mediaEscola);
        printf ("Situa��o escolar: %s\n\n", conceito (estudante[a].mediaEscola));
    }

    return 0;
}