#include <stdio.h>
#include <locale.h>

//Ex036 Pares e ímpares com a média

void main(){
    setlocale(LC_ALL, "Portuguese");

    int c=1, soma_pares=0, soma_impares=0, n, pares=0, impares=0;
    float media_pares, media_impares;

    while(c<=5){
        printf("Digite o %iº valor: ", c);
        fflush(stdin);
        scanf("%i", &n);

        if(n%2==0){
            soma_pares += n;
            pares++;
        }else{
            soma_impares +=n;
            impares++;
        }

        c++;
    }
    printf("Você digitou %i números pares. A média é %.2f.\n", pares, ((float)soma_pares/pares));
    printf("Você digitou %i números ímpares. A média é %.2f.\n\n", impares, ((float)soma_impares/impares));
}
