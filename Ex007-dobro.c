#include <stdio.h>
#include <locale.h>
//EX007 - Dobro e Ter�a Parte
void main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um n�mero: ");
    scanf("%i", &n);
    int dobro = n * 2;
    float terca = (float)n / 3;
    printf("Analisando o n�mero %i, seu dobro � %i e sua ter�a parte � %.2f.", n, dobro, terca);
}
