#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
   char nome [30];
   printf("Digite seu nome: ");
   gets(nome);
   printf("Você digitou \"%s\"", nome);
}
