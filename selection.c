#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "selection.h"

void Ordena_selectionSort(int *v, int n){
    int i, j, menor, troca;
    for (i = 0; i < n; i++ ){
        menor = i;
        for(j = i + 1; j < n; j++){
            if(v[j] < v[menor]){
                menor = j;
            }
        }
        if(i != menor){
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }
}
