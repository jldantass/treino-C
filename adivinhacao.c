#include <stdio.h>
#include <stdlib.h> // se colocarmos a palavra abs (valor), esse numero que foi declarado no valor se torna absoluto, ou seja, o seu sinal nao importara
#include <time.h>

int main () {

printf ("Bem vindo ao jogo da adivinhacao!!\n");

int segundos = time(0);
srand (segundos);

int numeroaleatorio = rand();

int numerosecreto = numeroaleatorio % 100;

int chute;
int tentativas = 1;

int pontos = 1000;
int pontosperdidos = 0;

do {
    printf ("Tentativa %d\n", tentativas);
    printf ("Qual eh o seu chute?\n");
    scanf ("%d", &chute);
    printf ("Se chute foi %d\n", chute);

    if (chute<0) {
        printf ("Voce não pode chutar numeros negativos!!\n");
        continue;
    }

    int maior = chute > numerosecreto;
    int acertou = (chute == numerosecreto);

    if (acertou) {
        printf ("Parabens, voce acertou!\n");
        break;
    }

    else if (maior) {
            printf ("Seu chute foi maior que o numero secreto!\n");
    }

    else {
        printf ("Seu chute foi menor que o numero secreto!\n");
    }

    tentativas++;
    pontosperdidos += 10;


} while (chute != numerosecreto);

pontos = 990 - pontosperdidos;

printf ("Voce acertou em %d tentativas e com %d pontos!\n", tentativas, pontos);
printf ("Fim de jogo!!\n");

}
