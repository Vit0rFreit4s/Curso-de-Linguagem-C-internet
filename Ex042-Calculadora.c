#include <stdio.h>
#include <locale.h>

//Ex041 - Calculadora (FLAG)

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, opcao=4;

    while(opcao != 5){

        if(opcao==4){
            printf("=-=-=-=-=-=-=-=-=-=- CALCULADORA -=-=-=-=-=-=-=-=-=-=\n");
            printf("\nOperando 1: ");
            fflush(stdin);
            scanf("%i", &n1);
            printf("\nOperando 2: ");
            fflush(stdin);
            scanf("%i", &n2);
        }else if(opcao == 0 || opcao >5){
            printf("==== OP플O INV핶IDA ====\n");
        }
        printf("\n===== ESCOLHA UMA OPERA플O =====\n\n");
        printf("\n[ 1 ] ADI플O");
        printf("\n[ 2 ] SUBTRA플O");
        printf("\n[ 3 ] MULTIPLICA플O");
        printf("\n[ 4 ] Entrar com novos dados");
        printf("\n[ 5 ] SAIR");
        printf("\n>>>>> SUA OP플O: \n");
        fflush(stdin);
        scanf("%i", &opcao);


        switch(opcao){
            case 1:
                printf("\n--------------------------------------\n");
                printf("Calculando %i + %i = %i\n", n1, n2, n1+n2);
                printf("--------------------------------------\n");
            break;
            case 2:
                printf("\n--------------------------------------\n");
                printf("Calculando %i - %i = %i\n", n1, n2, n1-n2);
                printf("--------------------------------------\n");
            break;
            case 3:
                printf("\n--------------------------------------\n");
                printf("Calculando %i * %i = %i\n", n1, n2, n1*n2);
                printf("--------------------------------------\n");
            break;
            case 5:
                printf("======= SAINDO =======\n==== VOLTE SEMPRE ====\n\n");
            break;
        }

    }
}
