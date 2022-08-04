#include <stdio.h>
#include <locale.h>

//Ex041 - Lendo dados ( FLAG)

void main(){
    setlocale(LC_ALL, "Portuguese");

    int valor=0, soma=0, maior=0, c=1;
    float media;

    while(valor != 9999){
        printf("\n---------------------------\n");
        printf("%iº VALOR [9999 faz parar] ", c);
        printf("\n---------------------------\n");
        printf("\nNÚMERO: ");
        fflush(stdin);
        scanf("%i", &valor);
        if(valor != 9999){
           soma += valor;
           media = ((float)soma/c);

        }if(c==1 && valor != 9999){
            maior = valor;
        }else if(maior<valor && valor != 9999){
            maior = valor;
        }
    c++;
    }
    printf("\n\nAo todo você digitou %i valores.\nA soma entre eles foi %i.\nE a média foi %.2f.\nO maior valor digitado foi %i.\n\n", c-2, soma, media, maior);
}
