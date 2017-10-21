#include <stdio.h>
#include <stdlib.h>


int main()
{
 double t1,t2, tempo;
 double i;
 t1 = tempo();
 printf("%lf\t",t1);

 for(i=0;i<300000000;i++);

 t2 = tempo();
 printf("%lf\t",t2);

 printf("%lf\n",t2-t1);
 return 0;
}
