#include <stdio.h>
#include <locale.h>
#include <time.h>

//EX018 - Servi�o militar v 1.0

void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int d = data ->tm_year+1900;
    int idade, nasc;

    printf("Atualmente estamos no ano de %i", d);
    printf("\nEm que ano voc� nasceu? ");
    scanf("%i", &nasc);

    idade = d - nasc;

    printf("-----------------------------------------------\n");

    if(idade>=18){
        printf("Sua idade atual � %i anos.\nJ� fez 18 anos. Espero sinceramente que voc� tenha se alistado.\n", idade);
    }else{
        printf("Sua idade atual � %i anos.\nVoc� ainda n�o tem 18 anos. N�o pode se alistar.\n", idade);
    }

}
