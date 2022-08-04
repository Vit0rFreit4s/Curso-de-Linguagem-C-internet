#include <stdio.h>
#include <locale.h>

//EX021 - Inverso ou Oposto

void main(){
    setlocale(LC_ALL, "Portuguese");

    int num, oposto;
    float inverso;

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%i", &num);

    oposto = num * (-1);
    inverso = 1/(float)num;

    if(num>=0){
        printf("O inverso de %i é igual a %.2f", num, inverso);
    }else{
        printf("O oposto de %i é igual a %i", num, oposto);
    }


}
