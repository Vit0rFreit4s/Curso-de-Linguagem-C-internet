#include <stdio.h>
#include <locale.h>
//EX010 - Pre�o do Produto
void main(){
    setlocale(LC_ALL, "Portuguese");
    char produto [30];
    float preco, valor_final, desc;


    printf("Produto: ");
    fflush(stdin);
    gets(produto);
    printf("Pre�o do %s: ", produto);
    fflush(stdin);
    scanf("%f", &preco);
    printf("Desconto: (%%): ");
    fflush(stdin);
    scanf("%f", &desc);
    valor_final = preco - (preco * desc / 100);
    printf("O produto %s custava R$%.2f, mas com %.2f%% de desconto, passa a custar R$%.2f.", produto, preco, desc, valor_final);






}
