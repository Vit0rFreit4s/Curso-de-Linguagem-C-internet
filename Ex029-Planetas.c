#include <stdio.h>
#include <locale.h>

//EX029 - Seu peso nos Planetas v 1.0

void main(){
    setlocale(LC_ALL, "Portuguese");

    float peso;
    int opcao;

    printf("Seu peso na Terra: (Kg) ");
    fflush(stdin);
    scanf("%f", &peso);

    printf("\nESCOLHA UM PLANETA\n");
    printf("===================\n");
    printf("1\tMerc�rio\n");
    printf("2\tV�nus\n");
    printf("3\tMarte\n");
    printf("4\tJ�piter\n");
    printf("5\tSaturno\n");
    printf("6\tUrano\n");
    printf("===================\n");

    printf("Digite sua op��o => ");
    fflush(stdin);
    scanf("%i", &opcao);

     switch(opcao){
        case 1:
            printf("No planeta Merc�rio, seu peso seria %.2f Kg", peso*0.37 );
            break;
        case 2:
            printf("No planeta V�nus, seu peso seria %.2f Kg", peso*0.88 );
            break;
        case 3:
            printf("No planeta Marte, seu peso seria %.2f Kg", peso*0.38 );
            break;
        case 4:
            printf("No planeta J�piter, seu peso seria %.2f Kg", peso*2.64 );
            break;
        case 5:
            printf("No planeta Saturno, seu peso seria %.2f Kg", peso*1.15 );
            break;
        case 6:
            printf("No planeta Urano, seu peso seria %.2f Kg", peso*1.17 );
            break;
        default:
            printf("Op��o inv�lida, tente novamente!\n");
            break;
     }

}
