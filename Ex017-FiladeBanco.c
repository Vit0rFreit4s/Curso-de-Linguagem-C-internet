#include <stdio.h>
#include <locale.h>
#include <time.h>

//EX017 - Consumidor ganha desconto

void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int ano = data ->tm_year+1900;
    int idade, nasc;

    printf("Em que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%i", &nasc);

    idade = ano - nasc;

    printf("\n-------------------------------------------------------------\n");
    printf("Vo�� tem %i anos, certo?", idade);
    printf("\nSeja bem-vindo(a) ao Banco Estudonauta!\n");
    if (idade>=65){
        printf("===== ATEN��O! DIRIJA-SE PARA A FILA PREFERENCIAL =====\n");
    }

    printf("-------------------------------------------------------------\n\n");


}
