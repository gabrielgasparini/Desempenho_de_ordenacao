#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

void shellSort(int *vet, int size) {
    int i , j , value;
    int gap = 1;
    while(gap < size) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap = gap / 3;
        for(i = gap; i < size; i++){
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]) {
                vet [j + gap] = vet[j];
                j =j - gap;
            }
                vet [j + gap] = value;
        }
    }
}


