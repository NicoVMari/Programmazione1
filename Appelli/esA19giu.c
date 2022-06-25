#include<stdio.h>
#include<stdlib.h>

#define R 5
#define C 4

void carica_matrice(int m[][C])
{
	printf("Inserisci i valori della prima riga\n");
	for (int j = 0; j < C; ++j)
	{
		printf("m[0][%d] = ",j);
		scanf("%d",&m[0][j]);
	}

	for (int i = 1; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			m[i][j]=m[i-1][j]*2;	
		}
		printf("\n");
	}
}

void visualizza_matrice(int m[][C])
{

	printf("\n\t\t");
	for (int j = 0; j < C; ++j)
	{
		printf("%d\t",j);
	}

	printf("\n\t\t");

	for (int j = 0; j < C; ++j)
	{
		printf("-\t");
	}
	printf("\n");

	for (int i = 0; i < R; ++i)
	{
		printf("%d\t|\t",i);
		for (int j = 0; j < C; ++j)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}

int cerca_matrice(int m[][C],int x)
{
	int flag=0;

	for (int i = 0; i < R && flag == 0; ++i)
	{
		for (int j = 0; j < C && flag == 0; ++j)
		{
			if (m[i][j] == x)
			{
				flag = 1;
			}
		}
	}

	return flag;
}

int somma_colonna(int m[][C],int c)
{
	int temp;

	if (c >= C)
	{
		temp = -1;
	}
	else
	{
		int somma=0;

		for (int i = 0; i < R; ++i)
		{
			somma += m[i][c];
		}

		temp=somma;
	}

	return temp;
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf("ERRORE, non inserimento del file da riga di comando\n");
		exit(1);
	}
	else
	{
		int m[R][C],x,c;

		carica_matrice(m);

		visualizza_matrice(m);

		printf("\nInserire un valore da ricercare nella matrice : ");
		scanf("%d",&x);

		int esito=cerca_matrice(m,x);

		printf("\nInserire l'indice di una colonna : ");
		scanf("%d",&c);

		int sc=somma_colonna(m,c);

		FILE *fp=NULL;
		fp=fopen(argv[1],"w");

		if (fp==NULL)
		{
			printf("ERRORE apertura file \n");
			exit(2);
		}
		else
		{
			if (esito == 1)
			{
				fprintf(fp,"%s\n","IL valore ricercato e' presente nella matrice\n");
			}
			else if (esito == 0)
			{
				fprintf(fp,"%s","IL valore ricercato non e' presente nella matrice\n");
			}

			if (sc == -1)
			{
				fprintf(fp, "%s\n","Il valore della colonna inserito non è competibile con la grandezza della matrice" );
			}
			else
			{
				fprintf(fp, "%s","Il valore della somma della colonna inserita vale :" );
				fprintf(fp, "%d\n",sc);
			}

			fclose(fp);

			printf("\nDati caricati correttemente ne file %s\n",argv[1]);
		}
	}

	return 0;
}