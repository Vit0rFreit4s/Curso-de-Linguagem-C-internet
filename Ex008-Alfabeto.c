#include <stdio.h>
#include <locale.h>
//EX008 - Alfabeto
void main(){
    setlocale(LC_ALL, "Portuguese");
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);
    char antes = letra - 1;
    char depois = letra + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.", letra, antes, depois);
}
