#include<stdio.h>
#include<stdlib.h>

#define DIM 30

void carica_vettore(int v[],FILE *f);
void visualizza_vettore(int v[]);
int cerca_vettore(int v[],int x);
void inserimento_vettore(int v[],int x);

int main(int argc, char const *argv[])
{
	
	if (argc != 2)
	{
		printf("ERRORE, non inserimento del file da terminale\n");
		exit(1);
	}
	else
	{
		int v[DIM],x,c;

		FILE *fp=NULL;
		fp=fopen(argv[1],"r");

		if (fp==NULL)
		{
			printf("ERRORE, nell'apertura del file\n");
			exit(2);
		}
		else
		{
			carica_vettore(v,fp);

			fclose(fp);

			visualizza_vettore(v);

			printf("\nInserire un valore da ricercare nel vettore : ");
			scanf("%d",&x);

			int esito=cerca_vettore(v,x);

			if (esito == -1)
			{
				printf("IL valore ricercato non e' presente nel vettore\n");
			}
			else
			{
				printf("IL valore ricercato e' presente nel vettore nell'indice : %d\n",esito);	
			}

			printf("\nInserire un nuovo valore da inserire nel vettore : ");
			scanf("%d",&c);

			inserimento_vettore(v,c);

			visualizza_vettore(v);
		}
	}

	return 0;
}

void carica_vettore(int v[],FILE *f)
{
	int temp, i = 0;

	while(fscanf(f,"%d",&temp) != EOF)
	{
		if (temp > 0 && temp%2==1)
		{
			v[i]=temp;
			i++;
		}
	}

	v[i]=-1;
}

void visualizza_vettore(int v[])
{
	printf("\nIncidi\tValori\n");
	for (int i = 0; v[i] != -1; ++i)
	{
		printf("%d\t%d\n",i,v[i]);
	}
}

int cerca_vettore(int v[],int x)
{
	int flag=-1;

	for (int i = 0; v[i] != -1 && flag == -1; ++i)
	{
		if (x==v[i])
		{
			flag=i;
		}
	}

	return flag;
}

void inserimento_vettore(int v[],int x)
{
	int l;

	while(v[l] != -1)
	{
		l++;
	}

	for (int i = l+1; i > 0; --i)
	{
		v[i]=v[i-1];
	}

	v[0]=x;
}