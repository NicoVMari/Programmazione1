/*
17) Realizzare un programma che stampi a video un rettangolo la cui cornice sia composta da asterischi * e il suo contenuto da  
    caratteri ‘A’, come nell’esempio:

********************
*AAAAAAAAAAAAAAAAAA*
*AAAAAAAAAAAAAAAAAA*
*AAAAAAAAAAAAAAAAAA*
********************

Il numero di colonne e di righe deve essere chiesto in input all’utente a tempo di esecuzione, entrambi devono essere maggiori di 1.

Esempi di esecuzione
--------------------

Se colonne (base) = 7 e righe (altezza) = 4 deve essere stampato

*******
*AAAAA*
*AAAAA*
*******

Se colonne (base) = 35 e righe (altezza) = 8 deve essere stampato

***********************************
*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
***********************************
*/


#include<stdio.h>
#include<math.h>

int main(){

int r,c;
int i =0;

printf("Inserisci il valore delle righe\n");
scanf("%d",&r);
printf("Inserisci il valore delle colonne\n");
scanf("%d",&c);

if (r<1 || c<1)
{
  printf("ERRORE\n");
}else{
for (int x = 0; x < r; ++x)
{
    for (int y = 0; y < c; ++y)
    {
        if (x==0 || x == r-1 || y==0 || y==c-1)
        {
          printf("*");
        }else
        {
          printf("A");
        }
         
    }
     printf("\n");
}
 printf("\n");
}

} 