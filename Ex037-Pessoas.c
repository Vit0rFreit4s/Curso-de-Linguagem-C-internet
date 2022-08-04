#include <stdio.h>
#include <locale.h>

//Ex037 - Cadastrando Pessoas

void main(){
    setlocale(LC_ALL, "Portuguese");

    int pessoas=0, c=1, homem=0, mulher=0, acima=0;
    float peso, ref;
    char sexo;

    printf("Quantas pessoas vamos cadastrar? ");
    fflush(stdin);
    scanf("%i", &pessoas);
    printf("Qual é o peso de referência (Kg)? ");
    fflush(stdin);
    scanf("%f", &ref);

    while(c<=pessoas){
        printf("---------------------------\n");
        printf("Pessoa %i de %i", c, pessoas);
        printf("\n---------------------------\n");

        printf("Peso: ");
        fflush(stdin);
        scanf("%f", &peso);
        printf("Sexo: ");
        fflush(stdin);
        sexo=getchar();

        if(peso<=ref){
            printf("===== PESO DENTRO DO LIMITE (%.2fKg) =====\n", ref);
        }else if(peso>=ref && sexo=='F' || sexo=='f'){
            printf("===== PESO ACIMA DO LIMITE (%.2fKg) =====\n", ref);
            acima++;
            mulher++;
        }else if(peso>=ref && sexo=='M' || sexo=='m'){
            printf("===== PESO ACIMA DO LIMITE (%.2fKg) =====\n", ref);
            acima++;
            homem++;
        }else{
            printf("ERRO, REINICIE O PROGRAMA!!!");
        }
        c++;
    }
    printf("\nAo todo, temos %i pessoas acima do limite de %.2fKg\nE dessas pessoas, %i são HOMENS e %i são MULHERES.\n\n", acima, ref, homem, mulher);
}
