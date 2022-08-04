#include <stdio.h>
#include <locale.h>
#include <time.h>

//EX025 - Serviço Militar 2.0

void main(){
    setlocale(LC_ALL, "Portuguese"); //Biblioteca para os caracteres em português

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int d = data -> tm_year+1900;
    int nasc, idade;

    printf("Atualmente estamos no ano de %i", d);
    printf("\nEm que ano você nasceu? ");
    fflush(stdin);
    scanf("%i", &nasc);

    idade = d - nasc;

    printf("\n--------------------------------------------------------\n");

    if(idade>18){
        printf("Sua idade atual é %i anos.\nSeu alistamento foi em %i. Já se passaram %i anos.", idade, (nasc+18), d-(nasc+18));
    }else if(idade<18){
        printf("Sua idade atual é %i anos.\nSeu alistamento será em %i. Ainda faltam %i anos.", idade, (nasc+18), (nasc+18)-d);
    }else{
        printf("Você completa %i anos exatamente em %i. Vá se alistar!.", idade, d);
    }
    printf("\n--------------------------------------------------------\n");
}
