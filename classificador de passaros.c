#include <stdio.h>

int main () {

    int voa;
    int bico;
    int nadar;


    printf ("Adivinhador de Ave!!\n");
    printf ("Digite 0 para nao e 1 para sim.\n");
    printf ("Ela voa?\n");
    scanf("%d", &voa);

    if (voa==1) {
        printf ("O bico dela eh do tamanho pequeno, medio ou grande?\n");
        printf ("1 para pequeno, 2 para medio, 3 para grande\n");
        scanf ("%d", &bico);

        if (bico==1) {
            printf ("Sua ave eh a arara!\n");
        }

        else if (bico==2) {
            printf ("Sua ave eh o abutre!\n");
        }

        else if (bico==3) {
            printf ("Sua ave eh o tucano!\n");
        }   
    }

    else {
            printf ("Ela nada?\n");
            printf ("Digite 0 para nao e 1 para sim.\n");
            scanf ("%d", &nadar);   

            if (nadar==0) {
                printf ("Sua ave eh a galinha!\n");
            }

            else if (nadar==1) {
                printf ("Sua ave eh o pinguim!\n"); 
        }
    }
}
