#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    unsigned int n;
    float m;
    printf("Digite um número inteiro: ");
    scanf("%i", &n);
    printf("Digite um número real: ");
    scanf("%f", &m);
    printf("Você acabou de digitar os valores %d e %.1f. Obrigado!", n, m);
}
