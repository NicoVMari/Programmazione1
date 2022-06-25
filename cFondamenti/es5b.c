/*5) Scrivere un programma che dato un numero intero in input, visualizza se il numero e' nullo, positivo o negativo.*/


#include<stdio.h>

int main(){

	int a;

	printf("Inserisci il valore : \n");
	scanf("%d",&a);

	if(a==0)
		printf("Valore nullo\n");
	else if (a>0)
            printf("Valore Positivo\n");
        else
        	printf("Valore negativo\n");
}