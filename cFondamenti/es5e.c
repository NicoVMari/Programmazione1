/*2. Scrivere un programma che permetta di inserire due vettori lunghi N e
stampi un terzo vettore i cui elementi sono la somma degli elementi dei
due vettori in input. Il programma utilizza 3 funzioni:
• Inserisci elementi nel vettore
• Calcola somma
• Stampa vettore*/

#include<iostream>
#include<math.h>
#define DIM 8

void carica(int v[] ,int dim)
{
	printf("Inserisci i valori del vettore\n");
	for (int i = 0; i < DIM; ++i)
	{
		printf("v [%d] = ", i);
		scanf("%d",&v[i]);
	}

	printf("\n");

}

void cerca(int v[],int dim , int x)
{
	int temp, cont, pos;
	temp = 0;

	for (int i = 0; i < dim && temp == 0; ++i)
	{
		if (v[i]==x)
		{		
			temp=1;
			pos=i;
			cont++;		
		}
	}

	if (temp==0)
	{
		printf("-1\n");
	}else if (temp==1)
	{
		printf("v [ %d ] \n",pos);
	}
}

int main(){

	int v[DIM],c;

	carica(v,DIM);

	printf("Inserisci il valore da ricercare : ");
	scanf("%d",&c);

	cerca(v,DIM,c);

	return 0;
}

