#include <stdio.h>

int main () {

    float nota1;
    float nota2;

    printf ("Fale sua primeira nota:\n");
    scanf ("%f", &nota1);
    printf ("Fale sua segunda nota:\n");
    scanf ("%f", &nota2);

    float media = (nota1+nota2)/2;

    if (media>=7) {
        printf ("Parabens, voce passou!!\n");
    }

    else {
            float notarec;

            printf ("Va pra recuperacao!!\n");
            printf ("Fale sua nota da recuperacao:\n");
            scanf ("%f", &notarec);

            int mediarec = (nota1+nota2+notarec)/3;

            if (mediarec>=7)
            printf ("Parabens, voce passou na recuperacao!!\n");

            else {
                printf ("Que pena, voce reprovou.\n");
            }
        }  
}