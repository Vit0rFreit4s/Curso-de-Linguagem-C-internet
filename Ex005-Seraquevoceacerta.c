#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
//EX005 - Será que você acerta?

void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int n1 = rand() % 5 + 1, n2;

    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar!\n");
    printf("Qual o seu palpite? ");
    scanf("%i", &n2);
    printf("Eu pensei no número %i e você pensou no %i\n", n1, n2);

}
