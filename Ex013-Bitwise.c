#include <stdio.h>
#include <locale.h>

//EX013 - Operadores Bitwise

void main(){
    setlocale(LC_ALL, "Portuguese");

    int v1, v2;

    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &v1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%i", &v2);

    printf("\n---------- OPERAÇÕES BITWISE ----------\n\n");
    printf("Calculando %i & %i é igual a %i.\n", v1, v2, (v1 & v2));
    printf("Calculando %i & %i é igual a %i.\n", v1, v2, (v1 | v2));
    printf("Calculando %i & %i é igual a %i.\n", v1, v2, (v1 ^ v2));


}
