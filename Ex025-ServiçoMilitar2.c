#include <stdio.h>
#include <locale.h>
#include <time.h>

//EX025 - Servi�o Militar 2.0

void main(){
    setlocale(LC_ALL, "Portuguese"); //Biblioteca para os caracteres em portugu�s

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int d = data -> tm_year+1900;
    int nasc, idade;

    printf("Atualmente estamos no ano de %i", d);
    printf("\nEm que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%i", &nasc);

    idade = d - nasc;

    printf("\n--------------------------------------------------------\n");

    if(idade>18){
        printf("Sua idade atual � %i anos.\nSeu alistamento foi em %i. J� se passaram %i anos.", idade, (nasc+18), d-(nasc+18));
    }else if(idade<18){
        printf("Sua idade atual � %i anos.\nSeu alistamento ser� em %i. Ainda faltam %i anos.", idade, (nasc+18), (nasc+18)-d);
    }else{
        printf("Voc� completa %i anos exatamente em %i. V� se alistar!.", idade, d);
    }
    printf("\n--------------------------------------------------------\n");
}
