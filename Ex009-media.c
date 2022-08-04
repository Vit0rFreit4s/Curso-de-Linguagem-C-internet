#include <stdio.h>
#include <locale.h>
//EX009 - Média do Aluno
void main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, media;
    char nome [20];

    printf("Nome do aluno: ");
    fflush(stdin);
    gets(nome);
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f", & n1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("O aluno %s tirou notas %.1f e %.1f e ficou com média %.1f", nome, n1, n2, media);

}
