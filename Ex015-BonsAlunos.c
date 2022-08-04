#include <stdio.h>
#include <locale.h>

//EX015 - BONS AUNOS MERECEM PARABÉNS

void main(){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, media;

    printf("Digite a sua primeira nota: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &n2);

    media = (n1 + n2)/2;

    printf("------------------------------------------------\n");
    if (media>=7){
       printf("MEUS PARABÉNS! ", media);

    }
    printf("A sua média final foi %.2f", media);
    printf("\n------------------------------------------------\n\n");
    }
