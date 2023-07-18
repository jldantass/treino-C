#include <stdio.h>

int main () {

    int idade;

    printf ("Qual sua idade?\n");
    scanf ("%d", &idade);

    if (idade>=18) {
        printf ("Voce eh maior de idade, va pagar seus boletos!\n");
    }

    else {
        printf ("Voce eh menor de idade, va estudar");
    }    
}