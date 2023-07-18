#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "Portuguese");

    int pergunta1;
    int pergunta2;
    int pergunta3;
    int total = 0;

    printf ("Bem-vindo ao quiz! Responda as perguntas abaixo:\n");
    printf ("OBS: Responda tudo em minusculo e sem acento! Numero 0 para nao, numero 1 para sim.\n");

    printf ("Pergunta 1: Adailton eh viado?\n");
    scanf ("%d", &pergunta1);
    if (pergunta1==1) {
        total+=1;
    }

    else {
        total=0;
    }

    printf ("Pergunta 2: Elon musk eh o homem mais rico do mundo?\n");
    scanf ("%d", &pergunta2);
    if (pergunta2==1) {
        total+=1;
    }

    else {
        total=0;
    }

    printf ("Pergunta 3: Joao lucas mora no bessa?\n");
    scanf ("%d", &pergunta3);
    if (pergunta3==0) {
        total+=1;
    }

    else {
        total=0;
    }

    printf ("Parabens voce acertou %d pergunta(as)!\n", total);
}
