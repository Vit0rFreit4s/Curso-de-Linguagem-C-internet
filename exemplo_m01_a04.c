#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("O %s tem %i anos de idade\n", "Vitor", 27);
    printf("Seu peso atual � de %6.2fKg\n", 75.0);
    printf("O seu sexo � %c", 'M');
}
