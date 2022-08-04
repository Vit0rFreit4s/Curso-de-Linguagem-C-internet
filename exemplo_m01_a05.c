#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    unsigned int idade = 27;
    float peso = 75.00;
    char sexo = 'M';
    char *nome = "Vitor";

    printf("%s é do sexo %c, tem %i anos e pesa %.2fKg", nome, sexo, idade, peso);
}
