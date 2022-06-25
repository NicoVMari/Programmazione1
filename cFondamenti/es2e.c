/*2. Scrivere un programma che permetta di inserire due vettori lunghi N e
stampi un terzo vettore i cui elementi sono la somma degli elementi dei
due vettori in input. Il programma utilizza 3 funzioni:
• Inserisci elementi nel vettore
• Calcola somma
• Stampa vettore*/

#include<iostream>
#include<math.h>

#define DIM 5

void carica_v(int v1[],int v2[] , int dim)
{
	printf("Primo vettore\n");
	for (int i = 0; i < DIM; ++i)
	{
		printf("v1 [%d] = ", i);
		scanf("%d",&v1[i]);
	}

	printf("Secondo vettore \n");
	for (int i = 0; i < DIM; ++i)
	{
		printf("v2 [%d] = ", i);
		scanf("%d",&v2[i]);
	}

	printf("\n");

}

void stampa_v(int v[], int dim)
{
	printf("Vettore Somma :\n");
	for (int i = 0; i < DIM; ++i)
	{
		printf("v [ %d ] = %d\n",i,v[i]);
	}
}

void somma_v(int vet1[],int vet2[],int vett3[],int dim)
{
	int somma;

	for (int i = 0; i < DIM; ++i)
	{
		somma=vet1[i]+vet2[i];
		vett3[i]=somma;
	}

	//return v3[DIM];
}

int main(){

	int v1[DIM];
	int v2[DIM];
	int v3[DIM];

	carica_v(v1,v2,DIM);
	somma_v(v1,v2,v3,DIM);
	stampa_v(v3,DIM);


	return 0;

}

