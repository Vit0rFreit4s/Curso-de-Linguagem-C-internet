#include <stdio.h>
#include <locale.h>

//Ex036 Pares e �mpares com a m�dia

void main(){
    setlocale(LC_ALL, "Portuguese");

    int c=1, soma_pares=0, soma_impares=0, n, pares=0, impares=0;
    float media_pares, media_impares;

    while(c<=5){
        printf("Digite o %i� valor: ", c);
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
    printf("Voc� digitou %i n�meros pares. A m�dia � %.2f.\n", pares, ((float)soma_pares/pares));
    printf("Voc� digitou %i n�meros �mpares. A m�dia � %.2f.\n\n", impares, ((float)soma_impares/impares));
}
