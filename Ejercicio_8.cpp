#include<stdio.h>
#include<stdlib.h>
int main(){

int a,b,c;
printf("Digitos\n");
printf("Introduzca el primer digito:");
scanf("%d", & a);
printf("Introduzca el segundo digito:");
scanf("%d", & b);
printf("Introduzca el tercer digito:");
scanf("%d", & c);

if (a<b){
printf("%d", a);
}

if (b<c){
	printf(",");
printf("%d", b);
}

if(a<b<c){
	printf(",");
printf("%d", c);
}
else if(c>b>a){
	printf(",");
	printf("%d", c);
}
if(b>c){
	printf(",");
	printf("%d", b);
	
}
if(a>b){
	printf(",");
printf("%d", a);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
