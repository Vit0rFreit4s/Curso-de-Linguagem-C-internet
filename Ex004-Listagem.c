#include <stdio.h>
#include <locale.h>
//EX004 - Listagem Completa e Localizada
void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome1[20], nome2[20], nome3[20];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;


    printf("Cadastrando a primeira pessoa:\n");
    printf("-------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    gets(nome1);
    fflush(stdin);
    printf("SEXO: ");
    sexo1 = getchar();
    fflush(stdin);
    printf("NOTA: ");
    scanf("%f", &nota1);
    printf("-------------------------------\n");
    printf("Cadastrando a segunda pessoa:\n");
    printf("-------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    gets(nome2);
    fflush(stdin);
    printf("SEXO: ");
    sexo2 = getchar();
    fflush(stdin);
    printf("NOTA: ");
    scanf("%f", &nota2);
    printf("-------------------------------\n");
    printf("Cadastrando a terceira pessoa:\n");
    printf("-------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    gets(nome3);
    fflush(stdin);
    printf("SEXO: ");
    sexo3 = getchar();
    fflush(stdin);
    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("\nListagem Completa\n");
    printf("-------------------------------\n");
    printf("NOME                SEXO NOTA\n");
    printf("%-20s %c %6.1f\n", nome1, sexo1, nota1);
    printf("%-20s %c %6.1f\n", nome2, sexo2, nota2);
    printf("%-20s %c %6.1f\n", nome3, sexo3, nota3);
    printf("-------------------------------\n");
}

