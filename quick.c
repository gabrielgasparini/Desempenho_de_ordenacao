#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "quick.h"

//------------------------------------------//
/*metodo de particao do vetor em subvetores recebendo
 como parametro o vetor ja dividido da funcao recursiva
 quickSort, o valor maximo (esq) e o valor minimo (dir)
 deste vetor*/
 int particao(int vet[], int esq, int dir){
 int x = vet[dir];
 int i = esq - 1;
 int j;

 /*loop de ordenacao dos sub vetores, levando tudo menor que
 o pivo para esquerda e o que e maior para a direita*/
 for(j = esq; j < dir; j++){

  /*se o valor da direita for maior que o da esquerda
  chama-se a funcao troca, para fazer a inversao dos
  valores dentro do vetor, caso contrario, nada acontece.
  Isso ira funcionar porque como e chamada por uma funcao
  recursiva, a primeira vez que for executada tera apenas
  dois valores e conforme for avancando os valores ja
  estarao ordenados. Se nao estiverem, caimos no pior caso*/
  if(vet[j] < x){
   i++;
   troca(&vet[i], &vet[j]);
  }
 }

 /*ao termino do processo, o valor que foi denominado como pivo
 sera levado para a ultima posicao do mesmo, deixando os elementos
 anteriores ordenados e ele sera o proximo pivo, ja que os sub
 vetores sao do mesmo tamanho*/
 troca(&vet[i + 1], &vet[dir]);
 return i + 1;
}

//simples metodo de troca utilizando ponteiros
void troca(int * pVetA, int * pVetB){
    int temp = * pVetA;
    * pVetA = * pVetB;
    * pVetB = temp;
}

 //metodo principal. Aqui realmente e onde o quick sort acontece
 int quickSort(int vet[], int esq, int dir){

 //valor que sera o ponteiro
 int r;

 /*essa e a funcao de parada da recursividade, quando dir e esq
 forem iguais, significando que o vetor nao pode mais ser
 subdividido*/
 if(dir > esq){

  //esse metodo retornara o primeiro valor de pivo
  r = particao(vet, esq, dir);

  /*esse metodo sera chamado diversas vezes para o lado
  esquerda, subdividindo o vetor sempre ao meio e o
  ordenando. O metodo sera chamado enquanto o vetor ainda
  puder ser subdividido, assumindo (dir > esq)*/
  quickSort(vet, esq, r - 1);

  /*esse metodo sera chamado diversas vezes para o lado
  direito, subdividindo o vetor sempre ao meio e o
  ordenando. O metodo sera chamado enquanto o vetor ainda
  puder ser subdividido, assumindo (dir > esq)*/
  quickSort(vet, r + 1, dir);
 }
}
