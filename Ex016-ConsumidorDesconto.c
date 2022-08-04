#include <stdio.h>
#include <locale.h>

//EX016 - Consumidor ganha desconto

void main(){
    setlocale(LC_ALL, "Portuguese");

    float valor_compra, desconto;

    printf("Qual foi o valor das compras? R$");
    fflush(stdin);
    scanf("%f", &valor_compra);

    desconto = valor_compra*0.1;

    printf("\n-------------------------------------------\n");
    printf("Você comprou R$%.2f na nossa loja.\n", valor_compra);

    if (valor_compra >= 500){
        printf("\n========== ATENÇÃO ==========\n");
        printf("Por fazer mais de R$500 em compras, você vai receber R$%.2f de desconto.\n", desconto);
        printf("O valor a ser pago é R$%.2f!", (valor_compra - desconto));
    }

    printf("\nVOLTE SEMPRE!");
    printf("\n-------------------------------------------\n\n");
}
