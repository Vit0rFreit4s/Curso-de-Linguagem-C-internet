#include <stdio.h>
#include <locale.h>

//EX011 - PAR ou �MPAR

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n1;

    printf("Digite um n�mero qualquer: ");
    scanf("%i", &n1);
    printf("O n�mero que voc� digitou � %s.\n", (n1%2==0)?"PAR":"�MPAR");

}
