#include <stdio.h>
#include <stdlib.h>

int carica_matrice(int dim,int m[][dim],const char nfile[])
{
	FILE *fp=NULL;
	fp=fopen(nfile,"r");

	int e;

	if (fp == NULL)
	{
		e = 0;
	}
	else
	{
		int v[dim*dim],x,i=0;

		while(fscanf(fp,"%d",&x) != EOF)
		{
			if (x > 0 && x%2 == 0)
			{
				v[i]=x;
				i++;
			}
		}

		if (i < dim*dim)
		{
			e = 0;
		}
		else
		{
			int k=0;

			for (int i = 0; i < dim; ++i)
			{
				for (int j = 0; j < dim; ++j)
				{
					m[i][j]=v[k];
					k++;
				}
			}

			e = 1;
		}
	}

	return e;
}

void visualizza_matrice(int dim,int m[][dim])
{
	printf("\n\t\t");

	for (int j = 0; j < dim; ++j)
	{
		printf("%d\t",j);
	}

	printf("\n\t\t");

	for (int j = 0; j < dim; ++j)
	{
		printf("-\t");
	}

	printf("\n");

	for (int i = 0; i < dim; ++i)
	{
		printf("%d\t|\t", i);
		for (int j = 0; j < dim; ++j)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void calcolo_matrice(int dim,int m[][dim],int ind,int *p1,int *p2)
{
	if (ind > dim - 1)
	{
		*p1=-1;
		*p2=-1;
	}
	else
	{
		int min,max;

		min=m[ind][0];
		max=m[ind][0];

		for (int j = 0; j < dim; ++j)
		{
			if (min > m[ind][j])
			{
				min=m[ind][j];
			}
			if (max < m[ind][j])
			{
				max=m[ind][j];
			}
		}

		*p1=min;
		*p2=max;

	}
}

void scambio_matrice(int dim,int m[][dim])
{
	int c;

	for (int i = 0; i < dim; ++i)
	{
		c=m[i][0];
		m[i][0]=m[i][dim-1];
		m[i][dim-1]=c;
		
	}
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf("ERRORE, non inserimento del file da terminale\n");
		exit(1);
	}
	else
	{
		int dim,p1=0,p2=0,ind;

		printf("Inserire la dimensione della matrice quadrata : ");
		scanf("%d",&dim);

		int m[dim][dim];

		int esito=carica_matrice(dim,m,argv[1]);
		if (esito == 0)
		{
			printf("ERRORE, non risucita del'apertura del file oppure errore nel popolamento della matrica\n");
			exit(2);
		}
		else
		{
			printf("Inserimento dei valori nella matrice correttamente\n");
		}

		visualizza_matrice(dim,m);

		printf("Inserire l'indice di una riga : ");
		scanf("%d",&ind);

		calcolo_matrice(dim,m,ind,&p1,&p2);
		printf("Il minimo nella riga %d vale : %d\n",ind,p1);
		printf("Il massimo nella riga %d vale : %d\n",ind,p2);

		scambio_matrice(dim,m);

		visualizza_matrice(dim,m);
	}

	return 0;
}