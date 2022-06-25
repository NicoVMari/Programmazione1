/*8) Scrivere un programma che prenda in input due valori e un operatore.
   Se l'operatore e' + allora calcola e visualizza la somma dei valori. 
   Se l'operatore e' - allora calcola e visualizza la differenza dei valori. 
   Se l'operatore e' * allora calcola e visualizza il prodotto dei valori.
   Se l'operatore e' / allora calcola e visualizza la divisione del primo valore per il secondo. 
   Se l'operatore e' diverso dai precedenti, allora visualizza il messaggio "operatore sconosciuto".*/


#include<stdio.h>

int main(){

	int a,b;
	char op;
	float ris;

	printf("Inserisci due valori : \n");
	scanf("%d",&a);
    scanf("%d",&b);
    printf("Inserisci l'operatore : \n");
    scanf("\n%c",&op);



  switch (op) 
  {
    case '+': printf("%d\n", a+b);
    break;
    case '-': printf("%d\n", a-b);
    break;
    case '*': printf("%d\n", a*b);
    break;
    case '/': printf("%d\n", a/b);
    break;
    default: printf("operatore inesistente\n");
  }


    /*if (op=='+')
    {
    	ris=a+b;
    	printf("Il risultato e' : %f\n",ris );
    }else if (op=='-')
    {
    	ris=a-b;
    	printf("Il risultato e' : %f\n",ris );
    }else if (op=='*')
    {
    	ris=a*b;
    	printf("Il risultato e' : %f\n",ris );
    }else if (op=='/')
    {
    	ris=a/b;
    	printf("Il risultato e' : %f\n",ris );
    }else 
        printf("Operatore non riconosciuto \n");*/
}