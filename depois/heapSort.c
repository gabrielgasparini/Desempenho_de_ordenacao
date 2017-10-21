#include <stdio.h>
#include <stdlib.h>

void preenche(int tamanho, int v[]){
    int i;

    for(i = 0; i < tamanho; i++){
        v[i] = rand() % 100;
    }
}

void imprime(int tamanho, int v[]){
    int i;

    for(i = 1; i <= tamanho; i++){
        printf("\t%d", i);
    }

    printf("\n");

    for(i = 0; i < tamanho; i++){
        printf("\t%d", v[i]);
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

void criaHeap(int i, int f, int v[]){
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

void main(){
    int v[9];

    preenche(9, v);
    imprime(9, v);
    printf("\n\n");
    heapSort(9, v);
    imprime(9, v);
}
