#include <stdio.h>
#include <locale.h>
//EX006 - Antecessor e Sucessor
void main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um número: ");
    scanf("%i", &n);
    int antes = n - 1;
    int depois = n + 1;
    printf("Analisando o número %i, seu antecessor é %i e seu sucessor é %i.", n, antes, depois);

}
