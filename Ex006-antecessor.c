#include <stdio.h>
#include <locale.h>
//EX006 - Antecessor e Sucessor
void main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um n�mero: ");
    scanf("%i", &n);
    int antes = n - 1;
    int depois = n + 1;
    printf("Analisando o n�mero %i, seu antecessor � %i e seu sucessor � %i.", n, antes, depois);

}
