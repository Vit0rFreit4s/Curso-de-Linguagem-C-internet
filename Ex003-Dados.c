#include <stdio.h>
#include <locale.h>
//EX003 - DADOS
void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome [30];
    unsigned int idade;
    float peso;

    printf("Qual � o seu nome? ");
    gets(nome);
    printf("Quantos anos voc� tem? ");
    fflush(stdin);
    scanf("%i", &idade);
    printf("Qual � o seu peso? (Kg)");
    fflush(stdin);
    scanf("%f", &peso);

    printf("----------<<< PROCESSANDO >>>----------\n");
    printf("Muito prazer, %s. Voc� tem %i anos e pesa %.2fKg correto?\n", nome, idade, peso);
    printf("FIM");
}
