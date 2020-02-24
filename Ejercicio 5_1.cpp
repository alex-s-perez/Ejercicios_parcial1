#include<stdio.h>
#include<stdlib.h>
int main(){

float edad, precio;

printf("1.-Entrada normal $75\n2.-Entrada para ni\xA4o con 60 de descuento\n3.-Entrada para adulto mayor con 55 por ciento de descuento\n ");
printf("Indique su edad:");
scanf("%f", & edad);

	
if(edad<18){
precio=75*0.4;
printf("Usted tiene descuento del 60 por ciento, su total seria: %f", precio);
}

else if(edad>60){ 
precio=75*0.45;
printf ("Usted tiene el descuento de 55 por ciento, su total seria:%f", precio);
}

else if(edad>18<60){
precio=75;
printf("El costo de su boleto es normal, su total es:%f", precio);
}
}











	
	
	
	
	
	
	
	
	
	
	
	
	
	












































