#include <stdio.h>
#include <locale.h>

// EX057 - O dobro do anterior

void main(){

    setlocale(LC_ALL, "Portuguese");

    int n [10], i;

    for(i=0; i < 10; i++){
        printf("Digite o número: ");
        fflush(stdin);
        scanf("%i", &n[0]);
    }
}
