#include <stdio.h>
#include <locale.h>

//EX027 - Tr�s Valores em Ordem

void main(){
    setlocale(LC_ALL, "Portuguese"); //Biblioteca para os caracteres em portugu�s

    int n1, n2, n3;

    printf("Me diga tr�s n�meros e eu colocarei eles em ordem para voc�.\n");
    printf("Primeiro n�mero: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo n�emro: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("Terceiro n�emro: ");
    fflush(stdin);
    scanf("%i", &n3);

    printf("\nPrimeiro n�mero: %i", n1);
    printf("\nSegundo n�mero: %i", n2);
    printf("\nTerceiro n�mero: %i", n3);

    if(n1>n2){
        if(n2>n3){
            printf("\nMaior: %i", n1);
            printf("\nIntermedi�rio: %i", n2);
            printf("\nMenor: %i", n3);
       }else if(n3>n1){
            printf("\nMaior: %i", n3);
            printf("\nIntermedi�rio: %i", n1);
            printf("\nMenor: %i", n2);
        }else if(n3>n2){
            printf("\nMaior: %i", n1);
            printf("\nIntermedi�rio: %i", n3);
            printf("\nMenor: %i", n2);
        }
    }else if(n2>n3){
        if(n3>n1){
            printf("\nMaior: %i", n2);
            printf("\nIntermedi�rio: %i", n3);
            printf("\nMenor: %i", n1);
        }else if(n1>n3){
            printf("\nMaior: %i", n2);
            printf("\nIntermedi�rio: %i", n1);
            printf("\nMenor: %i", n3);
        }
    }else{
        printf("\nMaior: %i", n3);
        printf("\nIntermedi�rio: %i", n2);
        printf("\nMenor: %i", n1);
    }
    }

