#include<stdio.h>

int main(){

int x,y,h,area;

printf("Inserire vaolre delle due basi e dell'altezza del trapezio : \n");
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&h);

if(x>0 && y>0 && h>0)
{
area=(x+y)*h/2;
printf("Base1 =  %d\n",x);
printf("Base2 = %d\n",y);
printf("Altezza = %d\n",h);
printf("Area = %d\n",area);



}else
   printf("ERRORE NEI DATI\n");  


}