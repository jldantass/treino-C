#include <stdio.h>

int main () {

    int opcao;
    int cardapio;
    int comanda = 0;
    int novopedido;

    printf ("Bem vindo ao cardapio dos cornos, se quiser fazer o pedido digite 1, se quiser sair do cardapio, digite 2.\n");
    scanf ("%d", &cardapio);

    if (cardapio==1) {
        
        do {
            printf ("Numero 1 = Sorvete\n");              //5
            printf ("Numero 2 = Bolo de chocofated\n");   //10
            printf ("Numero 3 = Banana Spit\n");          //12
            printf ("Numero 4 = Fetid Gateau\n");         //25
            printf ("Numero 5 = Pudim\n");                //10
            printf ("Numero 6 = Milkfated de morango\n"); //8
            printf ("Digite seu pedido abaixo:\n");
            scanf ("%d", &opcao);
            printf ("Deseja fazer outro pedido? Digite 1 para sim, 2 para nao\n");
            scanf ("%d", &novopedido);

            switch (opcao) {
                case 1:
                comanda += 5;
                break;

                case 2:
                comanda += 10;
                break;

                case 3:
                comanda += 12;
                break;

                case 4:
                comanda += 25;
                break;

                case 5:
                comanda += 10;
                break;

                case 6:
                comanda += 8;
                break;
            }
        } while (novopedido==1);
    }

    else {
        printf ("Pedido encerrado, obrigado!\n");
    }

    printf ("O total dos itens foi de %d!\n", comanda);
    printf ("Pedido encerrado, obrigado!\n");
}