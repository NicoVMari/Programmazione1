#include<iostream>
#include<math.h>

#define DIM 10

void carica_vettore(int v[], int dim, int q)
{

	for (int i = 0; i < q; ++i)
	{
		printf("v [ %d ] : ",i );
		scanf("%d",&v[i]);
	}

	v[q]=-1;
}

int conta_somme_precedenti(int v[])
{
	int conta=0;

	for (int i = 2; v[i]!=-1; ++i)
	{
		if (v[i]==v[i-1]+v[i-2])
		{
			conta++;
		}
	}

	return conta;
}


int main()
{	
	int v[DIM],sprecedenti;

	int q;

	do
	{
		printf("Quanti valori vuole inserire : ");
		scanf("%d",&q);

		if (q >= DIM)
		{
			printf("ERRORE  quantità superiore alla dimensione\n");
		}

	}while (q >= DIM);


	carica_vettore(v,DIM,q);

	sprecedenti=conta_somme_precedenti(v);

	printf("Conteggio : %d\n",sprecedenti);

	return 1;
}