#include <stdio.h>
#include <locale.h>

//EX030 - Pre�o por �poca

void main(){
    setlocale(LC_ALL, "Portuguese");

    float preco;
    int opcao;

    printf("Digite o pre�o de um produto: R$");
    fflush(stdin);
    scanf("%f", &preco);

    printf("\n\tESCOLHA UM PER�ODO");
    printf("\n\t==================\n");
    printf("1\tCarnaval [+10]\n");
    printf("2\tF�rias Escolares [+20]\n");
    printf("3\tDia das Crian�as [+5]\n");
    printf("4\tBlack Friday [-30]\n");
    printf("5\tNatal [-5]\n");
    printf("\t==================\n\n");

    printf("Digite sua op��o => ");
    fflush(stdin);
    scanf("%i", &opcao);

    printf("\n--------------------------------------------------------------------------------\n");
    switch(opcao){
        case 1:
            printf("Na �poca de Carnaval, o pre�o do produto vai para R$%.2f.", (preco + (preco*0.1)));
            break;
        case 2:
            printf("Na �poca das F�rias Escolares, o pre�o do produto vai para R$%.2f.", (preco + (preco*0.2)));
            break;
        case 3:
            printf("Na �poca do Dia das Crian�as, o pre�o do produto vai para R$%.2f.", (preco + (preco*0.05)));
            break;
        case 4:
            printf("Na �poca de Black Friday, o pre�o do produto vai para R$%.2f.", (preco - (preco*0.3)));
            break;
        case 5:
            printf("Na �poca de Natal, o pre�o do produto vai para R$%.2f.", (preco - (preco*0.05)));
            break;
        default:
            printf("Em �pocas assim, mantenha o pre�o do produto em R$%.2f\n", preco);
            break;
    }
    printf("\n--------------------------------------------------------------------------------\n");
}
