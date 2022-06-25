#include<stdio.h>

int main(){

int b,h,area;

printf("Inserire vaolre della base e dell'altezza del triangolo : \n");
scanf("%d",&b);
scanf("%d",&h);

if(b>0 && h>0)
{
  area=b*h/2;
  printf("L'area del triangolo vale : %d\n", area);

}else
   printf("ERRORE NEI DATI\n");  


}