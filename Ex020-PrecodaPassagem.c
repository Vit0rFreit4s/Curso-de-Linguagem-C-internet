#include <stdio.h>
#include <locale.h>

//EX020 - Preço da Passagem

void main(){
    setlocale(LC_ALL, "Portuguese");

    float dist, custo;

    printf("======== TABELA DE PREÇOS ========\n");
    printf("Viagens até 200 Km\tR$0,50/Km\n");
    printf("A partir de 200 Km\tR$0,35/Km\n");
    printf("----------------------------------\n");

    printf("Distância total da viagem, em Km: ");
    fflush(stdin);
    scanf("%f", &dist);

    if(dist<=200){
        printf("Uma viagem de %.2f Km vai custar R$0,50/Km.\n", dist);
        printf("Valor Total: R$%.2f\n", (dist*0.5));
    }else{
        printf("Uma viagem de %.2f Km vai custar R$0,35/Km.\n", dist);
        printf("Valor Total: R$%.2f\n", (dist*0.35));
    }
}
