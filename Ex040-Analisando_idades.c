#include <stdio.h>
#include <locale.h>
#include <string.h>


//Ex040 - Analisando idades
void main(){
    setlocale(LC_ALL, "Portuguese");

    int c=1, velho=0, novo=0, idade, velha=0, nova=0;
    char nome[30], nome_novo[30], nome_velho[30], nome_velha[30], nome_nova[30], sexo, homem, mulher;

    while(c<=4){
        printf("--------------------\n");
        printf("%iª PESSOA", c);
        printf("\n--------------------\n");
        printf("NOME: ");
        fflush(stdin);
        scanf("%s", nome);
        printf("IDADE: ");
        fflush(stdin);
        scanf("%i", &idade);
        printf("SEXO: ");
        fflush(stdin);
        scanf("%c", &sexo);

            if(c==1 && sexo=='F' || sexo=='f'){
                nome_nova [30] = nome;
                nova = idade;
                mulher = sexo;
                nome_velha [30] = nome;
                velha = idade;
                strcpy(nome_nova,nome);
                strcpy(nome_velha,nome);


            }else if(c==1 && sexo=='M' || sexo=='m'){
                nome_novo[30]= nome;
                novo = idade;
                homem = sexo;
                nome_velho[30]= nome;
                velho = idade;
                strcpy(nome_novo,nome);
                strcpy(nome_velho,nome);

            }else if(nova>idade){
                nome_nova [30]= nome;
                nova = idade;
                mulher = sexo;
                strcpy(nome_nova,nome);
            }else if(velha<idade){
                nome_velha [30]= nome;
                velha = idade;
                mulher = sexo;
                strcpy(nome_velha,nome);
            }else if(novo<idade){
                nome_novo [30]= nome;
                novo = idade;
                homem = sexo;
                strcpy(nome_novo,nome);
            }else if(velho>idade){
                nome_velho [30]= nome;
                velho = idade;
                homem = sexo;
                strcpy(nome_velho,nome);
            }

        c++;
    }
    printf("\nA mulher mais jovem é a %s que tem %i anos.\nA mulher mais velha é a %s que tem %i anos.\nO homem mais novo é o %s que tem %i anos.\nO homem mais velho é o %s que tem %i anos.\n", nome_nova, nova, nome_velha, velha, nome_novo, novo, nome_velho, velho);
}
