#include <stdio.h>
#include <locale.h>

//EX023 - Positivo ou Negativo

void main(){
    setlocale(LC_ALL, "Portuguese"); //Biblioteca para os caracteres em português

    int num; //Declaração de variáveis

    printf("\t\t\tMe diga um número e eu te direi se\n\t\t\tele é POSITIVO, NEGATIVO OU NULO.\n"); //Enunciado

    printf("\nDigite um número: ");
    fflush(stdin);
    scanf("%i", &num);

    if(num>0){
        printf("\nO valor %i digitado é POSITIVO.\n", num);
    }else if(num<0){
        printf("\nO valor %i digitado é NEGATIVO.\n", num);
    }else{
        printf("\nO valor %i digitado é NULO.\n", num);
    }


}
