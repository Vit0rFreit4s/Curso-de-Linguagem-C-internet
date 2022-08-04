#include <stdio.h>
#include <locale.h>
#include <string.h>

// EX043 - Cadastrando amigos

void main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[30], velho[30], novo[30];
    int idade, c = 1, idade_jovem, idade_velho;

    while(nome != "ACABOU" || nome != "acabou"){
        printf("---------------- NOVO AMIGO --------------------\n");
        printf("OBS: digite ACABOU no nome para parar!\n");
        printf("NOME: ");
        fflush(stdin);
        scanf("%s", nome);
        printf("IDADE: ");
        fflush(stdin);
        scanf("%i", &idade);

        if(nome!="Acabou" || nome != "acabou" && c==1){
            idade_jovem = idade;
            idade_velho = idade;
            strcpy(velho, nome);
            strcpy(novo, nome);
            idade += idade;
        }else if(nome!="Acabou" || nome != "acabou" && idade>idade_velho){
            idade_velho = idade;
            strcpy(velho, nome);
            idade += idade;
        }else if(idade<idade_jovem){
            idade_jovem = idade;
            strcpy(novo, nome);
            idade += idade;
        }
        c++;
    }
    printf("\nTotal de amigos cadastrados: %i", c-1);
    printf("\nSeu amigo mais velho é %s, com %i anos.", velho, idade_velho);
    printf("\nSeu amigo mais jovem é %s, com %i anos.", novo, idade_jovem);
    printf("\nA média de idade do grupo é de %.2f anos.", ((float)idade/(c-1)));
}
