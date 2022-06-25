/*4) Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero e stampi il valore assoluto di tale numero.
   (se il numero x inserito e' positivo o nullo, basta visualizzare x. 
    Se il numero inserito e' negativo, bisogna visualizzare -x). */

#include<stdio.h>

int main(){

   int a;

   printf("Inserisci il valore : \n");
   scanf("%d",&a);

   if(a>=0)
      printf("Valore assoluto :  %d \n",a);
   else
      printf("Valore assoluto :  %d \n",-a);
}