#include<iostream>
#include<math.h>

#define DIM 10

void carica_vettore(int v[], int q)
{

	for (int i = 0; i < q; ++i)
	{
		printf("v [ %d ] : ",i );
		scanf("%d",&v[i]);
	}

	v[q]=-1;
}

void maxmin(int v[], int *max, int *min)
{
	*max=v[0];

	for (int i = 0; v[i]!=-1; ++i)
	{
		if (*max<v[i])
		{
			*max=v[i];
		}
	}

	*min=v[0];

	for (int i = 0; v[i]!=-1; ++i)
	{
		if (*min>v[i])
		{
			*min=v[i];
		}
	}
}

int main()
{	
	int v[DIM];
	int q;
	int max,min;

	do
	{
		printf("Quanti valori vuole inserire : ");
		scanf("%d",&q);

		if (q >= DIM)
		{
			printf("ERRORE  quantità superiore alla dimensione\n");
		}

	}while (q >= DIM);

	carica_vettore(v,q);
	maxmin(v,&max,&min);

	printf("Valore massimo : %d\n", max);
	printf("Valore minimo : %d\n", min);

	return 1;
}