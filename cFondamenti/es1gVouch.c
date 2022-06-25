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

float media(int v[],int dim, int q)
{

	int somma=0;
	float media;

	for (int i = 0; v[i]!=-1; ++i)
	{
		somma=somma+v[i];
	}

	media=somma/q;

	return media;

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

	float m;

    m=media(v,DIM,q);
    printf("La media e' : %f\n", m);

	//visualizza(v);

	return 1;
}