#include <sys/time.h>
#include <stdio.h>

double media() {

//int i;
  double ti,tf,tempo;
  ti = tf = tempo = 0;
  timeval tempo_inicio,tempo_fim;
  gettimeofday(&tempo_inicio,NULL);

    //COLOCAR O CÓDIGO AQUI

/* i=10000000000000;
    i=i+i;

    printf("\n%d\n", i);
*/

  gettimeofday(&tempo_fim,NULL);
  tf = (double)tempo_fim.tv_usec + ((double)tempo_fim.tv_sec * (1000000.0));
  ti = (double)tempo_inicio.tv_usec + ((double)tempo_inicio.tv_sec * (1000000.0));
  tempo = (tf - ti) / 1000;
  printf("Tempo gasto em milissegundos %.3f\n",tempo);

  return tempo;
}
