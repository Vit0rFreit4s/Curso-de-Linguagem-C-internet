#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

// Ex049 - Contagem Personalizada

void main(){
    setlocale(LC_ALL,"Portuguese");

    int inicio = 0, fim = 0, passo = 0;

    printf("INÍCIO: ");
    fflush(stdin);
    scanf("%i", &inicio);
    printf("FINAL: ");
    fflush(stdin);
    scanf("%i", &fim);
    printf("PASSO: ");
    fflush(stdin);
    scanf("%i", &passo);

    for(inicio;passo <= fim; passo += inicio){
        printf("%i - ", passo);
    }
    printf("FIM!\n");
}
