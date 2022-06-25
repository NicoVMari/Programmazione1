/*6) Scrivere un programma che dati in input tre valori, visualizza il maggiore*/


#include<stdio.h>

int main(){

	int a,b,c;

	printf("Inserisci tre valori : \n");
	scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

	if(a>b)
		if(a>c)
			printf("Il numero maggiore e' : %d\n", a);
		else
			printf("Il numero maggiore e' : %d\n", c);
	else
		if(b>c)
			printf("Il numero maggiore e' : %d\n", b);
		else
	        printf("Il numero maggiore e' : %d\n", c); 
}