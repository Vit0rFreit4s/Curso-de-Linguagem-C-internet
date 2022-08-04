#include <stdio.h>
#include <locale.h>
#include <string.h>

//Ex039 - Mais velho e mais novo

void main(){
    setlocale(LC_ALL, "Portuguese");

    int c=1, velho=0, novo=0, idade;
    char nome[30], nome_novo[30], nome_velho[30];

    while(c<=5){
        printf("--------------------\n");
        printf("%iª PESSOA", c);
        printf("\n--------------------\n");
        printf("NOME: ");
        fflush(stdin);
        scanf("%s", nome);
        printf("IDADE: ");
        fflush(stdin);
        scanf("%i", &idade);

        if(c==1){
            velho=idade;
            nome_velho[30]=nome;
            novo=idade;
            nome_velho[30]=nome;
            strcpy(nome_novo,nome);
            strcpy(nome_velho,nome);
        }else if(idade>velho){
            velho=idade;
            nome_velho[30]=nome;
            strcpy(nome_velho,nome);

        }else if(idade<novo){
            novo=idade;
            nome_novo[30]=nome;
            strcpy(nome_novo,nome);

        }

        c++;
    }
    printf("\nA pessoa mais jovem é %s que tem %i anos.\nA pessoa mais velha é %s que tem %i anos.\n\n", nome_novo, novo, nome_velho, velho);
}
