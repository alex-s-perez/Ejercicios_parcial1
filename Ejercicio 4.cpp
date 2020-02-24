#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b;
printf("Escribe un numero");
scanf("%d", &a);
printf("Escribe un segundo numero");
scanf("%d" , & b);

if (a<b){
printf ("a es menor que b");
}

if(a>b){
printf("a es mayor que b");
}
if (a==b){
printf("a es igual que b");
}
}
