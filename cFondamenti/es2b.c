/*
2) Scrivere un programma che dati in input due valori, visualizza il maggiore.
*/

#include<stdio.h>

int main(){

	int a,b;

	printf("Inserisci due valori : \n");
	scanf("%d",&a);
    scanf("%d",&b);

	if(a>b)
		printf("%d e' maggiore di %d \n",a,b);
	else
		printf("%d e' maggiore di %d \n",b,a);
}