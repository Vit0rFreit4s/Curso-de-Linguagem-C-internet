#include <stdio.h>
#include <locale.h>

//EX027 - Três Valores em Ordem

void main(){
    setlocale(LC_ALL, "Portuguese"); //Biblioteca para os caracteres em português

    int n1, n2, n3;

    printf("Me diga três números e eu colocarei eles em ordem para você.\n");
    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo núemro: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("Terceiro núemro: ");
    fflush(stdin);
    scanf("%i", &n3);

    printf("\nPrimeiro número: %i", n1);
    printf("\nSegundo número: %i", n2);
    printf("\nTerceiro número: %i", n3);

    if(n1>n2){
        if(n2>n3){
            printf("\nMaior: %i", n1);
            printf("\nIntermediário: %i", n2);
            printf("\nMenor: %i", n3);
       }else if(n3>n1){
            printf("\nMaior: %i", n3);
            printf("\nIntermediário: %i", n1);
            printf("\nMenor: %i", n2);
        }else if(n3>n2){
            printf("\nMaior: %i", n1);
            printf("\nIntermediário: %i", n3);
            printf("\nMenor: %i", n2);
        }
    }else if(n2>n3){
        if(n3>n1){
            printf("\nMaior: %i", n2);
            printf("\nIntermediário: %i", n3);
            printf("\nMenor: %i", n1);
        }else if(n1>n3){
            printf("\nMaior: %i", n2);
            printf("\nIntermediário: %i", n1);
            printf("\nMenor: %i", n3);
        }
    }else{
        printf("\nMaior: %i", n3);
        printf("\nIntermediário: %i", n2);
        printf("\nMenor: %i", n1);
    }
    }

