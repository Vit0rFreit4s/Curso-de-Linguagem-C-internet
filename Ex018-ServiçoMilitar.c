#include <stdio.h>
#include <locale.h>
#include <time.h>

//EX018 - Serviço militar v 1.0

void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int d = data ->tm_year+1900;
    int idade, nasc;

    printf("Atualmente estamos no ano de %i", d);
    printf("\nEm que ano você nasceu? ");
    scanf("%i", &nasc);

    idade = d - nasc;

    printf("-----------------------------------------------\n");

    if(idade>=18){
        printf("Sua idade atual é %i anos.\nJá fez 18 anos. Espero sinceramente que você tenha se alistado.\n", idade);
    }else{
        printf("Sua idade atual é %i anos.\nVocê ainda não tem 18 anos. Não pode se alistar.\n", idade);
    }

}
