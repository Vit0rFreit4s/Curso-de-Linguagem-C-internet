#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

// Ex047 - Jogo de Adivinhar

void main(){
    setlocale(LC_ALL,"Portuguese");

    int sort = 0, maior = 0, menor = 0, c = 1, num = 0, tot = 3;


    printf("Vou pensar em um número entre 1 e 10!\n");
    printf("Você tem %i chances para tentar adivinhar\n", tot);
    printf("-------------------------------------------\n\n");

    do{
        srand(time (NULL));
        sort = rand()%10;


        printf("Chance de Nº %i/3. Em que número eu pensei? ", c);
        fflush(stdin);
        scanf("%i", &num);

        if(num == sort){
            printf("\nACERTOU na %iº tentativa!\n", c);
        }else if(num < sort){
            printf("Ainda não foi dessa vez... Mas vou te dar outra chance. Chute um outro valor MENOR!\n");
        }else if(num > sort){
            printf("Ainda não foi dessa vez... Mas vou te dar outra chance. Chute um outro valor MAIOR!\n");
        }else if(c > 3){
            printf("Não foi dessa vez, reinicie para jogar novamente!\n");
        }
        c++;
        }while(num != sort && c < 4);


    }





