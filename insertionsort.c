#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "insertionsort.h"
#include "menu.h"

void Ordena_insertionSort(int *v, int n){
    int i, j, aux;
        for(i=1; i<n; i++){
            aux =v[i];
            for(j=i; (j>0) && (aux <v[j-1]); j--){
                v[j] = v[j-1];
            }
            v[j] = aux;
        }

}
