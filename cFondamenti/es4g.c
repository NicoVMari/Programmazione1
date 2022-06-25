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

int occorrenza(int v[], int x)
{
	int k=0;

	for (int i = 0; v[i]!=-1; ++i)
	{
		if (v[i]==x)
		{
			k++;
		}
	}

	return k;
}


int main()
{	
	int v[DIM];

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

	int x;
	printf("Inserire il valore dell'occorrenza : ");
	scanf("%d",&x);

	int o;

	o=occorrenza(v,x);
	printf("L'occorenza e' uguale a : %d\n",o);

	return 1;
}