#include <stdio.h>

int main (void) {

    int valor1;
    int valor2;
    int valor3;

    printf ("Diga o valor da medida da primeira coluna:\n");
    scanf ("%d", &valor1);
    printf ("Diga o valor da medida da segunda coluna:\n");
    scanf ("%d", &valor2);
    printf ("Diga o valor da medida da terceira coluna:\n");
    scanf ("%d", &valor3);
    
    int maior = 0;
    int menor = 0;

    if (valor1 > valor2 && valor1 > valor3) {
        maior = valor1;
    }

    else if (valor2 > valor1 && valor2 > valor3) {
        maior = valor2;
    }
    
    else if (valor3 > valor1 && valor3 > valor2) {
        maior = valor3;
    }   

    if (valor1 < valor2 && valor1 < valor3) {
        menor = valor1;
    }

    else if (valor2 < valor1 && valor2 < valor3) {
        menor = valor2;
    }
    
    else if (valor3 < valor1 && valor3 < valor2) {
        menor = valor3;
    }  

    printf ("O maior valor eh %d e o menor valor eh %d.\n", maior, menor);
}