#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Ex035 - Sorteando Números

void main(){
    setlocale(LC_ALL, "Portuguese");

    int c=1, n;

    printf("Quantos números você quer que eu sorteie? ");
    fflush(stdin);
    scanf("%i", &n);

    while(c<=n){
        printf("\nO %iº valor sorteado foi %i.\n", c, rand()%10);
        c++;
    }
}
