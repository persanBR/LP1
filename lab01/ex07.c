#include <stdio.h>

int main (void) {
  int times, ptime, utime; 
  int v=0,e=0,d=0,soma=0,i=1,cmaior=0,cmenor=100;
  for (times = 4 ; i <= times ; i=i+1 ) {
      printf("Informe a quantidade de vitorias do time %d\n", i);
      scanf("%d", &v);
      printf("Informe a quantidade de empates do time %d\n", i);
      scanf("%d", &e);
      printf("Informe a quantidade de derrotas do time %d\n", i);
      scanf("%d", &d);
      soma = ((v*3) + (e*1)); 
	      if ( soma > cmaior) 
	      {
	      		 cmaior = soma;
	      		 ptime = i;
	      }
              else if (soma < cmenor )
	      {		
	      		cmenor = soma;
			utime = i;
	      }
  }
  printf("Primeiro colocado é o time: %d\n", ptime);
  printf("Pontuacao do primeiro colocado: %d\n", cmaior);
  printf("Ultimo colocado é o time: %d\n", utime);
  printf("Pontuacao do ultimo colocado: %d\n", cmenor);
  return 0;
}
