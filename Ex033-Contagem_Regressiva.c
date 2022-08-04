#include <stdio.h>
#include <locale.h>

//EX033 - Contagem Regressiva

void main(){
    setlocale(LC_ALL, "Portuguese");

    int c = 1, comeca, multiplos;

    printf("Onde quer que a contagem comece? ");
    fflush(stdin);
    scanf("%i", &comeca);
    printf("Quer marcar os múltiplos de: ");
    fflush(stdin);
    scanf("%i", &multiplos);

    while(comeca>=c){
        if(comeca%multiplos==0){
            printf("[%i] - ", comeca);
        }else{
            printf("%i - ", comeca);
        }
        comeca = comeca - c;
    }
    printf("FIM!");

}
