#include <stdio.h>
#include <locale.h>

//EX011 - PAR ou ÍMPAR

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n1;

    printf("Digite um número qualquer: ");
    scanf("%i", &n1);
    printf("O número que você digitou é %s.\n", (n1%2==0)?"PAR":"ÍMPAR");

}
