#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Ex046 - Números Sorteados

void main(){
    setlocale(LC_ALL,"Portuguese");

    int c = 1, soma = 0, maior = 0, menor = 0, cinco = 0, sort = 0;
    char resp;

    printf("Vou sortear vários números\n");
    printf("------------------------------------\n");

    do{
        srand(time (NULL));
        sort = rand()%10;

        printf("O %i valor sorteado foi %i ", c, sort);

        printf("Quer sortear mais um? [S/N] ");
        fflush(stdin);
        scanf("%c", &resp);

        c++;

        if(c==1){
            maior = sort;
            menor = sort;
            soma += sort;
        }else if(sort > maior){
            maior = sort;
        }else if(sort < menor){
            menor = sort;
        }
    }while(resp == 'S' || resp == 's')


}
