#include <stdio.h>
#include <locale.h>

//EX024 - Ordem em dois números

void main(){
    setlocale(LC_ALL, "Portuguese"); //Biblioteca para os caracteres em português

    int n1, n2;

    printf("Me diga dois números e eu colocarei os dois em oredem crescente.\n");
    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo núemro: ");
    fflush(stdin);
    scanf("%i", &n2);

    if(n1>n2){
        printf("Os números em ordem são %i e %i.", n2, n1);
    }else if(n1<n2){
        printf("Os números em ordem são %i e %i.", n1, n2);
    }else{
        printf("Os números são iguais!");
    }
}
