#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Obdena_selectionSort(int *vetor, int n);
void imprimeVetor(int *vetor, int n);

main(){
    setlocale(LC_ALL, "portuguese");

    int desordenado[9], ordenado[5];

    desordenado[0] = 120;
    desordenado[1] = 150;
    desordenado[2] = 110;
    desordenado[3] = 130;
    desordenado[4] = 100;
    desordenado[5] = 160;
    desordenado[6] = 140;
    desordenado[7] = 190;
    desordenado[8] = 180;
    desordenado[9] = 170;

    printf("_______________Vetor desordenado:________________\n");
    imprimeVetor(desordenado, 9);

    Obdena_selectionSort(desordenado, 9); //Procedimento de ordenação do vetor

    printf("______________Vetor após ordenação:______________\n");
    imprimeVetor(desordenado, 9);

    system("pause");
}


void Obdena_selectionSort(int *v, int n){
    int i, j, menor, troca;
        for(i=0; i<n -1; i++){
            menor =i;
            for(j=i +1; j<n; j++){
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

void imprimeVetor(int *vetor, int n){
    int i;

    printf("Índice:");
    for(i = 0; i < n; i++){
        printf("\t%d", i);
    }

    printf("\nValor:");
    for(i = 0; i < n; i++){
        printf("\t%d", vetor[i]);
    }

    printf("\n\n");
}

