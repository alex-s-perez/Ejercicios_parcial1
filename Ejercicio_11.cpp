#include <stdio.h>
#include <stdlib.h>

int main (void){
	
int x1,x2,y1,y2;

float m,m1,m2;

printf("Introduzca las coordenadas del primer punto de un plano cartesiano (P1):");
	scanf("%d",&x1);
	scanf("%d",&y1);
printf("Introduzca las coordenadas del segundo punto de un plano cartesiano (P2):");
	scanf("%d",&x2);
	scanf("%d",&y2);
	
(m1=y2-y1);
(m2=x2-x1);
(m=m1/m2);

printf("El resultado de la pendiente de la recta m es: %f\n",m);
}
