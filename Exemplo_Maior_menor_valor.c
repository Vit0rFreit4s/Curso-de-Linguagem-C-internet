#include <stdio.h>
#include <locale.h>


//Exemplo Maior e menor valor

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n, c=1, maior=0, menor=0;

    while(c<=4){
        printf("Digite um número ");
        fflush(stdin);
        scanf("%i", &n);

        if(c==1){
        maior=n;
        menor=n;
        }else if(n<menor){
        menor=n;
        }else if(n>maior){
        maior=n;
        }
    c++;
    }
    printf("\nO maior valor doi %i.\nO menor valor foi %i.", maior, menor);
}
