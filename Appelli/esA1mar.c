#include<stdio.h>
#include<stdlib.h>

#define DIM 30

void carica_vettore(int v[],const char nfile[]);
void visualizza_vettore(int v[]);
int minimo_vettore(int v[]);
void copia_parziale(int v1[],int v2[]);
void copia_parziale_facoltativo(int *v1,int *v2);

int main(int argc, char const *argv[])
{
	
	if (argc != 2)
	{
		printf("ERRORE, non inserimento del file da linea di comando\n");
		exit(1);
	}
	else
	{
		int v1[DIM];
		int v2[DIM];

		carica_vettore(v1,argv[1]);

		visualizza_vettore(v1);

		int min1=minimo_vettore(v1);
		printf("Il valore minimo vale : %d\n\n",min1);

		copia_parziale(v1,v2);

		visualizza_vettore(v2);

		int min2=minimo_vettore(v2);
		printf("Il valore minimo vale : %d\n\n",min2);

		copia_parziale_facoltativo(v1,v2);
	}

	return 0;
}

void carica_vettore(int v[],const char nfile[])
{
	FILE *fp=NULL;
	fp=fopen(nfile,"r");

	if (fp == NULL)
	{
		printf("ERRORE, nell'apertura del file\n");
		exit(2);
	}
	else
	{
		int i=0;

		while(fscanf(fp,"%d",&v[i]) != EOF)
		{
			i++;
		}

		v[i] = -1;
	}

	fclose(fp);
}

void visualizza_vettore(int v[])
{
	for (int i = 0; v[i] != -1; ++i)
	{
		printf("%d: %d\t",i,v[i]);
	}
	printf("\n");
}

int minimo_vettore(int v[])
{
	int m=v[0];

	for (int i = 0; v[i] != -1; ++i)
	{
		if (m>v[i])
		{
			m=v[i];
		}
	}

	return m;
}

void copia_parziale(int v1[],int v2[])
{
	int i,j=0;

	for (i = 0; v1[i] != -1; ++i)
	{
		if (v1[i] > 9 && v1[i] < 100)
		{
			v2[j]=v1[i];
			j++;
		}
	}

	v2[j]=-1;
}

void copia_parziale_facoltativo(int *v1,int *v2)
{
	int i,j=0;

	for (i = 0; *(v1 + i) != -1; ++i)
	{
		if (*(v1 + i) > 9 && *(v1 + i) < 100)
		{
			*(v2 + j)=*(v1 + i);
			j++;
		}
	}

	*(v2 + j)=-1;
}