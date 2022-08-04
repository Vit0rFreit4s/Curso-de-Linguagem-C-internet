#include <stdio.h>
#include <locale.h>
//EX007 - Dobro e Terça Parte
void main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um número: ");
    scanf("%i", &n);
    int dobro = n * 2;
    float terca = (float)n / 3;
    printf("Analisando o número %i, seu dobro é %i e sua terça parte é %.2f.", n, dobro, terca);
}
