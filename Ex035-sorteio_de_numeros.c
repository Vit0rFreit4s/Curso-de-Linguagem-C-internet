#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Ex035 - Sorteando N�meros

void main(){
    setlocale(LC_ALL, "Portuguese");

    int c=1, n;

    printf("Quantos n�meros voc� quer que eu sorteie? ");
    fflush(stdin);
    scanf("%i", &n);

    while(c<=n){
        printf("\nO %i� valor sorteado foi %i.\n", c, rand()%10);
        c++;
    }
}
