#include <stdio.h>

int main () {

    int salario;
    
    printf ("Digite seu salario:\n");
    scanf ("%d", &salario);

    if (salario<=0) {
        printf ("O valor esta errado.\n");
        }
        
    else if (salario>0 && salario<1320) {
            printf ("Denuncie seu chefe!\n");
        }

    else if (salario>=1320 && salario<=5000) {
            printf ("Parabens, eh um bom salario.\n");
        }
    

    else {
        printf ("Parabens, voce eh um adalberto safado!!\n");
        }

}