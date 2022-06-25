#include<stdio.h>
#include<math.h>
int main(){

float l1,l2,h,area;

printf("Inserisci il valore del primo lato\n");
scanf("%f",&l1);
printf("Inserisci il valore del secondo lato\n");
scanf("%f",&l2);
printf("Inserisci il valore dell'altezza lato\n");
scanf("%f",&h);

area=(l1+l2)*h/2;

printf("Lato1 =%f\n",l1);
printf("Lato2 =%f\n",l2);
printf("Altezza =%f\n",h);
printf("Area =%f\n",area);

}