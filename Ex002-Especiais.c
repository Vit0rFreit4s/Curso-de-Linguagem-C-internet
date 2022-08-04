#include <stdio.h>
#include <locale.h>
//EX002-ESPECIAIS
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf(" \\a \t=\t Beep\n");
    printf(" \\n \t=\t Nova linha\n");
    printf(" \\t \t=\t Tabulação\n");
    printf(" \\\\ \t=\t Barra\n");
    printf(" %%%% \t=\t Porcentagem\n");
    printf(" \\\? \t=\t Interrogação\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}
