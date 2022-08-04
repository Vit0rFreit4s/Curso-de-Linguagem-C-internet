#include <stdio.h>
#include <locale.h>
#include <time.h>

//EX022 - Da pra ver o filme?

void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int d = data ->tm_hour;
    float horario, dinheiro;


    printf("=========== CINEMA ESTUDONAUTA ==========\n");
    printf("PREÇO DO INGRESSO: R$20,00");
    printf("\n-----------------------------------------\n");

    printf("Qual o horário da sessão? ");
    fflush(stdin);
    scanf("%f", &horario);
    printf("Quanto dinheiro você tem? R$");
    fflush(stdin);
    scanf("%f", &dinheiro);

    if(d<horario && dinheiro>=20){
        printf("\nAgora são %i horas.\nVocê consegue comprar o ingresso!\n\n", d);
    }else{
        printf("\nAgora são %i horas.\nInfelizmente não é possível comprar o ingresso!\n\n", d);
    }
}
