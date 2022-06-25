#include <stdio.h>
#include <stdlib.h>

#define DIM 30

int carica_vettore(int v[],const char nfile[]);
void visualizza_vettore(int v[]);
void somma_vettore(int v[],int *s1,int *s2);
void cancella_primo(int v[]);
int cerca_vettore(int v[],int x);
void inserisci_vettore(int v[],int val);
void mM_vettore(int v[],int *m,int *M);
void copia_parziale(int v1[],int v2[]);

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf("ERROE, non inserimento del file da terminale \n");
		exit(1);
	}
	else
	{
		int v[DIM];

		int esito1=carica_vettore(v,argv[1]);
		if (esito1 == 0)
		{
			printf("ERRORE , nell'apertura del file\n");
			exit(2);
		}
		else if (esito1 == 1)
		{
			visualizza_vettore(v);

			int s1=0,s2=0,x,val;

			somma_vettore(v,&s1,&s2);
			printf("\nLa somma dei valori composti da una cifra valgono : %d\n",s1);
			printf("La somma dei valori composti da due cifre valgono : %d\n",s2);

			cancella_primo(v);

			visualizza_vettore(v);

			printf("\nInserire un valore da ricercare all'interno del vettore : ");
			scanf("%d",&x);

			int esito2=cerca_vettore(v,x);
			if (esito2 == -1)
			{
				printf("Il valore non e' presente nel vettore\n");
			}
			else
			{
				printf("Il valore e' presente nel vettore nell'indice %d\n",esito2);
			}

			printf("\nInserire un valore da aggiungere al vettore : ");
			scanf("%d",&val);

			inserisci_vettore(v,val);

			visualizza_vettore(v);

			int m,M;

			mM_vettore(v,&m,&M);
			printf("\nIl valore massimo nel primo vettore vale : %d",m);
			printf("\nIl valore minimo nel primo vettore vale : %d\n",M);

			int v2[DIM];

			copia_parziale(v,v2);

			visualizza_vettore(v2);

			mM_vettore(v2,&m,&M);
			printf("\nIl valore massimo nel secondo vettore vale : %d",m);
			printf("\nIl valore minimo nel secondo vettore vale : %d\n",M);
		}

	}

	return 0;
}

int carica_vettore(int v[],const char nfile[])
{
	FILE *fp=NULL;
	fp=fopen(nfile,"r");

	int e;

	if (fp == NULL)
	{
		e=0;
	}
	else
	{
		int x,i=0;

		while(fscanf(fp,"%d",&x) != EOF)
		{
			if (x > 0  && x%2==1)
			{
				v[i]=x;
				i++;
			}
		}

		fclose(fp);
		v[i]=-1;
		e=1;
	}

	return e;
}

void visualizza_vettore(int v[])
{
	printf("\nindici\tvalori\n");
	for (int i = 0; v[i] != -1; ++i)
	{
		printf("%d\t%d\n",i,v[i]);
	}
}

void somma_vettore(int v[],int *s1,int *s2)
{
	for (int i = 0; v[i] != -1; ++i)
	{
		if (v[i] < 10)
		{
			*s1 +=v[i];
		}
		else if (v[i] > 9 && v[i] < 100)
		{
			*s2 +=v[i];
		}
	}
}

void cancella_primo(int v[])
{
	for (int i = 0; v[i] != -1; ++i)
	{
		v[i]=v[i+1];
	}
}

int cerca_vettore(int v[],int x)
{
	int e=-1;

	for (int i = 0; v[i] != -1 && e ==-1; ++i)
	{
		if (v[i] == x)
		{
			e=i;
		}
	}

	return e;
}

void inserisci_vettore(int v[],int val)
{
	int k=0;

	for (int i = 0; v[i] != -1; ++i)
	{
		k++;
	}

	for (int i = k ; i > 0; --i)
	{
		v[i]=v[i-1];
	}

	v[0]=val;
}

void mM_vettore(int v[],int *m,int *M)
{
	*m=v[0];
	*M=v[0];

	for (int i = 0; v[i] != -1; ++i)
	{
		if (*m > v[i])
		{
			*m=v[i];
		}
		if (*M < v[i])
		{
			*M=v[i];
		}
	}
}

void copia_parziale(int *v1,int *v2)
{
	int k=0;

	for (int i = 0; *(v1 + i) != -1; ++i)
	{
		if (*(v1 + i) > 9 && *(v1 + i) < 100)
		{
			*(v2 + k)=*(v1 + i);
			k++;
		}
	}

	*(v2 + k)=-1;
}
