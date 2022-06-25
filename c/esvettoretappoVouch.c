#include<iostream>
#include<math.h>

#define DIM 10

void carica_vettore(int v[], int dim)
{
	int q;

	do
	{
		printf("Quanti valori vuole inserire : ");
		scanf("%d",&q);

		if (q >= dim)
		{
			printf("ERRORE  quantità superiore alla dimensione\n");
		}

	}while (q >= dim);

	for (int i = 0; i < q; ++i)
	{
		printf("v [ %d ] : ",i );
		scanf("%d",&v[i]);
	}

	v[q]=-1;
}

void visualizza(int v[])
{
	for (int i = 0; v[i]!=-1; ++i)
	{
		printf("%d : %d\t",i, v[i] );
		printf("\n");
	}
}

int main()
{	
	int v[DIM];

	carica_vettore(v,DIM);
	visualizza(v);

	return 1;
}