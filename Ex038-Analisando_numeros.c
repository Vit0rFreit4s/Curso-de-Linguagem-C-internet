#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Ex038 - Analisnado n�meoros

void main(){
    setlocale(LC_ALL, "Portuguese");

    int c=1, n=0, maiores=0, div=0, sorteado;

    printf("Quantos n�meors vou sortear? ");
    fflush(stdin);
    scanf("%i", &n);

    printf("Sorteando %i n�meros... ", n);

    srand(time (NULL)); // iniciar o processo do aleat�rio

    while(c<=n){

        sorteado=rand()%10;
        printf("%i .. ", sorteado);

        if(sorteado>=5){
            maiores++;
       }else if(sorteado%3==0){
            div++;
        }
    c++;
    }
    printf("\tDos %i n�meros sorteados\n%i s�o maiores que cinco\n\t%i s�o divis�veis por tr�s.\n\n", n, maiores, div);
}

