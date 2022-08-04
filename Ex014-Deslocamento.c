#include <stdio.h>
#include <locale.h>

//EX014 - Operadores de Deslocamento

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n, d;

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%i", &n);
    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%i", &d);


    printf("\n---------- OPERAÇÕES SHIFT ----------\n\n");
    printf("Calculando %i >> %i é igual a %i.\n", n, d, (n >> d));
    printf("Calculando %i << %i é igual a %i.\n", n, d, (n << d));


}
