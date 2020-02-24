#include<stdio.h>
#include<stdlib.h>
int main(){
int x,c;
printf("Introduce un valor: ");
scanf("%d", & x);
if(x<=0){
c=x+3;
printf("El resultados es %d", c);
}
if(x>0){
c=(x*x)+(2*x);
printf("El resultado es %d", c);

}

}
