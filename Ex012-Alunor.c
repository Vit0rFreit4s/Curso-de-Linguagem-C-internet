#include <stdio.h>
#include <locale.h>

//EX012 - Situa��o do Aluno

void main(){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, media;

    printf("Primeira nota: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Segunda nota: ");
    fflush(stdin);
    scanf("%f", &n2);

    media=(n1+n2)/2;

    printf("A m�dia do aluno foi %.2f", media);
    printf("\nA situa��o � %s", (media>=7)?"APROVADO":"REPROVADO");
}
