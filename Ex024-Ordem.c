#include <stdio.h>
#include <locale.h>

//EX024 - Ordem em dois n�meros

void main(){
    setlocale(LC_ALL, "Portuguese"); //Biblioteca para os caracteres em portugu�s

    int n1, n2;

    printf("Me diga dois n�meros e eu colocarei os dois em oredem crescente.\n");
    printf("Primeiro n�mero: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo n�emro: ");
    fflush(stdin);
    scanf("%i", &n2);

    if(n1>n2){
        printf("Os n�meros em ordem s�o %i e %i.", n2, n1);
    }else if(n1<n2){
        printf("Os n�meros em ordem s�o %i e %i.", n1, n2);
    }else{
        printf("Os n�meros s�o iguais!");
    }
}
