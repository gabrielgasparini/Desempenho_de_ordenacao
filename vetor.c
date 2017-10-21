#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

double vetor_insertion(int vetor_desordenado){
    int i;
    int *vetor_insertion_ordena;

    *vetor_insertion_ordena = vetor_desordenado;

    for(i = 0; i < 1000; i++){
        printf("\n Vetor na Função de Ordenação, Posição %d° Valor:[%d]", i,vetor_insertion_ordena[i]);
    }
}

int *gera_dados(){
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
        dados[i] = rand() % 100000;
    }

    /*for(i =0; i < num; i++){
        printf("Posição %d° Valor: [%d] \n", i,dados[i]);
    }*/

    return dados;
}
