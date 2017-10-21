#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bubble.h"

void Ordena_bubbleSort(int *v, int n){
    int i, continua, aux, fim = n;
    do{
        continua = 0;
        for(i=0; i<fim; i++){
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                continua = 1;
            }
        }
        fim--;
    }while(continua != 0);
}






