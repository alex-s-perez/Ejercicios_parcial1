#include<stdio.h>
#include<stdlib.h>
int main (){
float ladoa, ladob, base, altura, area;
char opt;
printf("1.-Area de un rectangulo\n2.-Area de un triangluo\n3.-Area de un trapecio");
printf("\nIntroduce una opcion:");
opt=getchar();
printf("Ingrese el valor de la altura:");
scanf("%f", & altura);
printf("Ingrese el valor de la base:");
scanf("%f", & base);
switch(opt){
case'1':
	area=base*altura;
	printf("El resultado es %f", area);
	break;
case'2':
	area=(base*altura)/(2);
	printf("El resultado es %f", area);
	break;
case'3':
printf("Ingrese el valar de lado a:");
scanf("%f", & ladoa);
printf("Ingrese el valor de ladob:");
scanf("%f", & ladob);
area=((ladob*ladoa)*(altura))/(2);
printf("El resultado es %f", area);
break;
}

}
