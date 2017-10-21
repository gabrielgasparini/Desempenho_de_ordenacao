#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

void vetor_insertion(dados){
    int **ord, i;
    ord = malloc(sizeof(int) *dados);

    for(i = 0; i < 10; i++){
        printf("\t [%d]", ord[i]);
    }
}



void gera_dados(){
    int i, num;

    printf("\n 1>> 1.000 \t 2>> 5.000 \t 3>> 10.000 \t 4>> 20.000 \t 5>> 50.000 \t 6>> 100.000 \t 0>> Voltar \n\n -> ");
    scanf("%d", &num);
    switch(num){
        case 1:
            num = 1000;
        break;
        case 2:
            num = 5000;
        break;
        case 3:
            num = 10000;
        break;
        case 4:
            num = 20000;
        break;
        case 5:
            num = 50000;
        break;
        case 6:
            num = 100000;
        break;
        default:
            printf("\n\n OPÇÃO INVÁLIDA!!!");
        break;
    }
    int *dados = malloc(sizeof(int) *num);

    for(i =0; i < num; i++){
        dados[i] = rand();
    }

}
