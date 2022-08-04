#include <stdio.h>
#include <locale.h>
#include <string.h>

//EX026 - Qual é seu Estado?

void main(){
    setlocale(LC_ALL, "Portuguese"); //Biblioteca para os caracteres em português

    char estado [3];

    printf("Em que estado você nasceu? ");
    fflush(stdin);
    gets(estado);

    if(strcmp(estado, "SP") == 0 || strcmp(estado, "sp") == 0 || strcmp(estado, "Sp") == 0){
        printf("\nNascendo em %s você é PAULISTA.\n", estado);
    }else if(strcmp(estado, "RJ") == 0 || strcmp(estado, "rj") == 0 || strcmp(estado, "Rj") == 0){
        printf("\nNascendo em %s você é CARIOCA.\n", estado);
    }else if(strcmp(estado, "RS") == 0 || strcmp(estado, "rs") == 0 || strcmp(estado, "Rs") == 0){
        printf("\nNascendo em %s você é GAÚCHO.\n", estado);
    }else if(strcmp(estado, "SC") == 0 || strcmp(estado, "sc") == 0 || strcmp(estado, "Sc") == 0){
        printf("\nNascendo em %s você é BARRIGA VERDE.\n", estado);
    }else if(strcmp(estado, "PR") == 0 || strcmp(estado, "pr") == 0 || strcmp(estado, "Pr") == 0){
        printf("\nNascendo em %s você é TINGUI.\n", estado);
    }else{
        printf("\nNascendo em %s você é natural da sua cidade, mas ainda não sei como te chamar!.", estado);
    }
}
