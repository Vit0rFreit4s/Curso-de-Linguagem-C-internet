#include <stdio.h>
#include <locale.h>

// Ex045 - Analisando n�meros

void main(){
    setlocale(LC_ALL,"Portuguese");

    int valor = 0, cont = 1, par = 0, impar = 0, menor = 0;
    char cond;

    do{
        printf("Digite o %i� valor: ", cont);
        fflush(stdin);
        scanf("%i", &valor);
        printf("Quer continuar? [S/N] ");
        fflush(stdin);
        scanf("%c", &cond);


        if(cont == 1 && valor % 2 != 0){
            impar = valor;
        }
        if(valor % 2 == 0){
            par += 1;
        }else{
            impar = valor;
        }if(impar <= valor){
            menor = impar;
        }

        cont ++;

    }while(cond == 'S' || cond == 's');


    printf("\n\nAo todo, voc� digitou %i valores.\n", cont-1);
    printf("Voc� digitou %i valores PARES.\n", par);
    printf("O valor %i foi o menor n�mero �MPAR digitado.\n\n", impar);

}
