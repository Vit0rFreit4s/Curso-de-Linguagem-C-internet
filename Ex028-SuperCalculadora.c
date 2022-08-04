#include <stdio.h>
#include <locale.h>

//EX028 - Super Calculadora v 1.0

void main(){
    setlocale(LC_ALL, "Portuguese");

    float v1, v2;
    char opcao;

    printf("Valor 1: ");
    fflush(stdin);
    scanf("%f", &v1);
    printf("Valor 2: ");
    fflush(stdin);
    scanf("%f", &v2);

    printf("\n===================\n");
    printf("+\tAdi��o\n");
    printf("-\tSubtra��o\n");
    printf("*\tMultiplica��o\n");
    printf("/\tDivis�o\n");
    printf("===================\n");

    printf("Digite sua op��o => ");
    fflush(stdin);
    opcao = getchar();

    switch(opcao){
        case '+':
            printf("\nO resultado de %.0f+%.0f � igual a %f.\n", v1, v2, (v1+v2));
            break;
        case '-':
            printf("\nO resultado de %.0f-%.0f � igual a %f.\n", v1, v2, (v1-v2));
            break;
        case '*':
            printf("\nO resultado de %.0f*%.0f � igual a %.f.\n", v1, v2, (v1*v2));
            break;
        case '/':
            printf("\nO resultado de %.0f/%.0f � igual a %.2f.\n", v1, v2, (v1/v2));
            break;
        default:
            printf("\nOp��o inv�lida, tente novamente!\n");
            break;
    }
}
