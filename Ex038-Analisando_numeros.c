#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Ex038 - Analisnado númeoros

void main(){
    setlocale(LC_ALL, "Portuguese");

    int c=1, n=0, maiores=0, div=0, sorteado;

    printf("Quantos númeors vou sortear? ");
    fflush(stdin);
    scanf("%i", &n);

    printf("Sorteando %i números... ", n);

    srand(time (NULL)); // iniciar o processo do aleatório

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
    printf("\tDos %i números sorteados\n%i são maiores que cinco\n\t%i são divisíveis por três.\n\n", n, maiores, div);
}

