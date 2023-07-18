#include <stdio.h>

int main () {

    int numero1;
    int numero2;
    int opcao; 

    printf("digite 1 para soma\n digite 2 para subtracao\n digite 3 para multiplicacao\n digite 4 para divisao\n");
    scanf("%d", &opcao);

    printf ("digite o primeiro numero:\n");
    scanf ("%d", &numero1);
    printf ("digite o segundo numero:\n");
    scanf ("%d", &numero2);

    if (opcao==1){
        printf("a soma dos numeros eh: %d", numero1+numero2);
    }

    else if (opcao==2){
        printf("a subtracao dos numeros eh: %d", numero1-numero2);
    }

     else if (opcao==3){
        printf("a multiplicaçao dos numeros eh: %d", numero1*numero2);
    }

     else if (opcao==4){
        printf("a divisao dos numeros eh: %d", numero1/numero2);
    }

    else {
        printf ("opcao invalida!");
    }
}