#include <stdio.h>
#include <locale.h>

//EX030 - Preço por Época

void main(){
    setlocale(LC_ALL, "Portuguese");

    float preco;
    int opcao;

    printf("Digite o preço de um produto: R$");
    fflush(stdin);
    scanf("%f", &preco);

    printf("\n\tESCOLHA UM PERÍODO");
    printf("\n\t==================\n");
    printf("1\tCarnaval [+10]\n");
    printf("2\tFérias Escolares [+20]\n");
    printf("3\tDia das Crianças [+5]\n");
    printf("4\tBlack Friday [-30]\n");
    printf("5\tNatal [-5]\n");
    printf("\t==================\n\n");

    printf("Digite sua opção => ");
    fflush(stdin);
    scanf("%i", &opcao);

    printf("\n--------------------------------------------------------------------------------\n");
    switch(opcao){
        case 1:
            printf("Na época de Carnaval, o preço do produto vai para R$%.2f.", (preco + (preco*0.1)));
            break;
        case 2:
            printf("Na época das Férias Escolares, o preço do produto vai para R$%.2f.", (preco + (preco*0.2)));
            break;
        case 3:
            printf("Na época do Dia das Crianças, o preço do produto vai para R$%.2f.", (preco + (preco*0.05)));
            break;
        case 4:
            printf("Na época de Black Friday, o preço do produto vai para R$%.2f.", (preco - (preco*0.3)));
            break;
        case 5:
            printf("Na época de Natal, o preço do produto vai para R$%.2f.", (preco - (preco*0.05)));
            break;
        default:
            printf("Em épocas assim, mantenha o preço do produto em R$%.2f\n", preco);
            break;
    }
    printf("\n--------------------------------------------------------------------------------\n");
}
