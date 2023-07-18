#include <stdio.h>

int valorfixo = 1000;
int novovalor;
int dinheirodepositado;

void dinheirofinal () {
    novovalor = valorfixo + dinheirodepositado;
    printf ("O valor total da conta agora eh: %d", novovalor);
}

int main () {
    printf ("Valor inicial da conta: %d\n", valorfixo);
    printf ("Digite o valor a ser depositado:\n");
    scanf ("%d", &dinheirodepositado);
    dinheirofinal ();
}