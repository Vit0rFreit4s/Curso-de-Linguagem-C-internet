#include <stdio.h>
#include <locale.h>

//EX032 - Jogo do Pin

void main(){
    setlocale(LC_ALL, "Portuguese");

    int c = 1, termina;

    printf("Quer contar até quanto? ");
    fflush(stdin);
    scanf("%i", &termina);

    while(c<=termina){
        if(c%4==0){
            printf("PIN!\n");
       }else{
            printf("%i - ", c);
       }
       c++;
    }
}
