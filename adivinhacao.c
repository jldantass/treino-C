#include <stdio.h> 
#define NUMERO_DE_TENTATIVAS 5   //criar uma constante

int main () {
    printf ("****************************************** \n");
    printf ("* Bem vindo ao nosso jogo de adivinhacao * \n");
    printf ("****************************************** \n");

    int numerosecreto = 42;
    int chute;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {      //cria a variavel e da valor, cria uma condiçao pra esta variavel, fale o que vai acontecer | usa for quando quiser uma limitaçao
        printf ("Tentativa %d de %d.\n", i, NUMERO_DE_TENTATIVAS);
        printf ("Qual eh o seu chute? \n");
        scanf ("%d", &chute);
        printf ("Seu chute foi: %d \n", chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (chute < 0) {
            printf ("Voce nao pode chutar numeros negativos!\n");
            i--;

            continue;   //quando esse bloco de codigo for verdadeiro, faz com que o resto do bloco nao seja executado, apenas esse unico printf e volta para o loop inicial (o inicio do for)
        }

        if (acertou) {
            printf ("Parabens, voce acertou!\n");

            break;    //o loop acaba aqui; interrompe o loop
        }

        else if (maior) {
            printf ("Seu numero chute foi maior que o numero secreto!\n");
        }

        else {
            printf ("Seu numero chute foi menor que o numero secreto!\n");
        }
    } 

    printf ("Fim de jogo.\n");
}
