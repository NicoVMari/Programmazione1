/*3) Realizzare un programma che legga due numeri interi e controlli se il primo e' multiplo del secondo.
   (a e' multiplo di b se il resto della divisione di a per b e' 0).
*/

#include<stdio.h>

int main(){

   int a,b;

   printf("Inserisci due valori : \n");
   scanf("%d",&a);
   scanf("%d",&b);

   if(a%b==0)
      printf("%d e' multiplo di %d \n",a,b);
   else
      printf("%d e' non è multiplo di %d \n",b,a);
}