#include <stdio.h>
#include <locale.h>

//EX031 - Contagem Personalizada

void main(){
    setlocale(LC_ALL, "Portuguese");

    int comeca, termina, incremento;

    printf("Onde come�a a contagem? ");
    fflush(stdin);
    scanf("%i", &comeca);
    printf("Onde termina a contagem? ");
    fflush(stdin);
    scanf("%i", &termina);
    printf("Qual vai ser o incremento? ");
    fflush(stdin);
    scanf("%i", &incremento);


    printf("COME�OU - ");
    while(comeca<=termina){
        printf("%i - ", comeca);
        comeca +=  incremento;

    }
    printf("FIM!");

}
