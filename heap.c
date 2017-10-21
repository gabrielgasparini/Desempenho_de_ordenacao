#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "heap.h"



void preenche(int tamanho, int v[]){
    int i;

    for(i = 0; i < tamanho; i++){
        v[i] = rand() % 100;
    }
}

void imprime(int tamanho, int v[]){
    int i;
    printf("\n");

    for(i = 0; i < tamanho; i++){
        printf("\nVetor Posição[%d] = %d", i, v[i]);
    }
}

void heapSort(int n, int v[]){
    int i, aux;

    for(i=(n-1)/2; i >= 0; i--){
        criaHeap(i, n-1, v);
    }

    for(i = n-1; i >= 1; i--){
        aux = v[0];
        v[0] = v[i];
        v[i] = aux;
        criaHeap(0, i - 1, v);
    }
}

void criaHeap(int i, int f, int v[i]){
    int aux = v[i];
    int j = i * 2 + 1;

    while(j <= f){
        if(j < f){
            if(v[j] < v[j + 1]){
                j = j + 1;
            }
        }

        if(aux < v[j]){
            v[i] = v[j];
            i = j;
            j = 2 * i + 1;
        }else{
            j = f + 1;
        }
    }

    v[i] = aux;
}
