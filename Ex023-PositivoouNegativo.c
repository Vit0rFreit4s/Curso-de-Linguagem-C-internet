#include <stdio.h>
#include <locale.h>

//EX023 - Positivo ou Negativo

void main(){
    setlocale(LC_ALL, "Portuguese"); //Biblioteca para os caracteres em portugu�s

    int num; //Declara��o de vari�veis

    printf("\t\t\tMe diga um n�mero e eu te direi se\n\t\t\tele � POSITIVO, NEGATIVO OU NULO.\n"); //Enunciado

    printf("\nDigite um n�mero: ");
    fflush(stdin);
    scanf("%i", &num);

    if(num>0){
        printf("\nO valor %i digitado � POSITIVO.\n", num);
    }else if(num<0){
        printf("\nO valor %i digitado � NEGATIVO.\n", num);
    }else{
        printf("\nO valor %i digitado � NULO.\n", num);
    }


}
