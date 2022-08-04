#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

// Ex048 - Tabuada

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num = 0, c;

    printf("---------- TABUADA ----------\n");
    printf("NÚMERO: ");
    fflush(stdin);
    scanf("%i", &num);

    for(c = 1; c <= 10; c++){
        printf("\n%i x %i = %i\n", num, c, c*num);
    }
}
