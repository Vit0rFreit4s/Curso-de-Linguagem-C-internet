#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    unsigned int n;
    float m;
    printf("Digite um n�mero inteiro: ");
    scanf("%i", &n);
    printf("Digite um n�mero real: ");
    scanf("%f", &m);
    printf("Voc� acabou de digitar os valores %d e %.1f. Obrigado!", n, m);
}
