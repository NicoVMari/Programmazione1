#include<stdio.h>

int main(){

int x,y,area;

printf("Inserire valore della base e dell'altezza del rettangolo : \n");
scanf("%d",&x);
scanf("%d",&y);

if(x>0 && y>0)
{
  area=x*y;
printf("Lato1 =  %d\n",x);
printf("Lato2 = %d\n",y);
printf("Area = %d\n",area);


}else
   printf("ERRORE NEI DATI\n");  


}