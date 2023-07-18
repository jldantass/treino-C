#include <stdio.h>
#include <math.h>    //sqrt(numero)

int main () {

    float a, b , c, b2;

    printf ("Digite o valor de a:\n");
    scanf ("%f", &a);
    printf ("Digite o valor de b:\n");
    scanf ("%f", &b);
    printf ("Digite o valor de c:\n");
    scanf ("%f", &c);    

    b2 = pow(b,2);
    float delta;
    delta = (b2)-(4*a*c);
    float raiz1;
    float raiz2;
    raiz1 = (-b+sqrt(delta))/(2*a);
    raiz2 = (-b-sqrt(delta))/(2*a);

    if (delta<0 || a==0) {
        printf ("Impossivel calcular.\n");
    }

    else {
        printf ("Raiz um eh %.2f e raiz dois eh %.2f\n", raiz1, raiz2);
    }
}