#include<iostream>
#include<math.h>

void vIn(short unsigned int v[], short unsigned int DIM)
{
	printf("Inserire i voti tra 18 e 30, 31 in caso di lode\n");
	for (short unsigned int i = 0; i < DIM; ++i)
	{
		do
		{
			printf("Voto [ %d ] : ",i);
			scanf("%d", &v[i]);

			if (v[i] < 18 || v[i] > 31)
			{
				printf("ERRORE inserire un voto tra 18 e 31\n");
			}
		} while (v[i] < 18 || v[i] > 31);

		
	}
}

double vMedia(short unsigned int v[], short unsigned int DIM)
{
	short unsigned int somma=0;
	double media;

	for (short unsigned int i = 0; i < DIM; ++i)
	{
		somma = somma + v[i];
	}

	media= (double) somma/DIM;

	return media;
}

int main(){
	
short unsigned int dim;

do
{
	printf("Inserisci la dimensione del vettore : ");
	scanf("%d",&dim);

	if (dim < 0 || dim > 10)
	{
		printf("ERRORE  Inserire la dimensione tra 0 e 10\n");
	}
} while (dim < 0 || dim > 10);
	

short unsigned int voti[dim];

vIn(voti,dim);
double m=vMedia(voti,dim);

printf("La media vale : %.2f\n",m );

return 0;

}

	int v[DIM];

	for (int i = 0; i < DIM; ++i)
	{
		printf("v [ %d ] : ",i);
		scanf("%d",&v[i]);
	}

	for (int i = 0; i < DIM; ++i)
	{
		printf("%d\n",v[i]);
	}