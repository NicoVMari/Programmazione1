/*7) Scrivere un programma che prenda in input il raggio di una circonferenza. 
   Se il raggio e' maggiore di 0, allora il programma calcola e visualizza il valore della circonferenza e dell'area del cerchio. 
   Altrimenti visualizza il messaggio "il raggio deve essere maggiore di 0". */

#include<stdio.h>



int main(){
	const float PI=3.14;

   int r;
   float c;

   printf("Inserisci il raggio : \n");
   scanf("%d",&r);

   if (r>0)
   {
   	c=2*PI*r;
   	printf("Il valore della circonferenza e' : %f\n", c);
   }else 
    printf("IL raggio deve essere maggiore di 0\n");

}