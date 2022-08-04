#include <stdio.h>
#include <locale.h>

//Ex034 - Soma Par e Ímpar

void main(){
    setlocale(LC_ALL, "Portuguese");

    int c=1, soma_pares=0, soma_impares=0, n;

    while(c<=5){
        printf("Digite o %iº valor: ", c);
        fflush(stdin);
        scanf("%i", &n);

        if(n%2==0){
            soma_pares += n;
        }else{
            soma_impares += n;
        }
        c++;
    }
    printf("\nSomando todos os pares, temos %i.\nSomando todos os ímpares, temos %i.\n\n", soma_pares, soma_impares);
}
