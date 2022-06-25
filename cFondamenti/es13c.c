/*13) Scrivere un programma che legge da tastiera un intero n maggiore di 0.
    e stampa i numeri interi da 0 a n, quattro per riga.

    Per incolonnare i numeri si puo' usare:
    - il carattere TAB \t
      printf("%d\t", x);

    - Assumendo che gli interi non abbiano piu' di sei cifre, 
      usare la specifica di formato "%6d", che stampa un intero usando 6 caratteri:
      printf("%6d", x);
      Se x e' uguale a 1234, x viene preceduto da due spazi, in modo da stampare complessivamente sei caratteri.


Esempio di esecuzione
--------------------

Se n e' uguale a 14 deve essere stampato

     0     1     2     3
     4     5     6     7
     8     9    10    11
    12    13    14  */

#include<stdio.h>

int main(){

  int n,temp;

printf("Inserire un valore : \n");
scanf("%6d",&n);

for (int i = 0; i <= n; ++i)
{
  printf("%6d\t",i);
  temp=i+1;
  if (temp%4==0)
  {
    printf("\n");
  }
   
}


}

