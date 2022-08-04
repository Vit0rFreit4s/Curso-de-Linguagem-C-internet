#include <stdio.h>
#include <locale.h>

//EX019 - Ano Bissexto

void main(){
    setlocale(LC_ALL, "Portuguese");

    int ano;

    printf("Digite um ano qualquer: ");
    fflush(stdin);
    scanf("%i", &ano);

    if(ano%4==0 && ano%100!=0 || ano%400==0){
        printf("O ano %i é BISSEXTO.\n", ano);
    }else{
        printf("O ano %i não é BISSEXTO.", ano);
    }
}
