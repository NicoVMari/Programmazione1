#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<ctime>
#include<time.h>

//#define R 5
#define C 5

void matrice_genera(int riga,int mat[][C],int a,int b)
{
	srand(time(NULL));
	for (int i = 0; i < riga; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			mat[i][j]=rand()%(b-a+1)+a ;
		}
	}
}

void matrice_visualizza(int riga,int mat[][C])
{
	for (int i = 0; i < riga; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			printf("%d\t", *(*(mat + i)+j) );
		}
		printf("\n");
	}
}

int array_riga(int riga, int mat[][C],int v[])
{
	int sum,i;

	for ( i = 0; i < riga; ++i)
	{
		sum=0;
		for (int j = 0; j < C; ++j)
		{
			sum=sum + *(*(mat + i)+j);
		}
		v[i]=sum;
		printf("\n");
	}

	return i;

}

int array_colonna(int riga,int mat[][C],int v[])
{
	int sum,j,i;

	for (int j = 0; j < C; ++j)
	{
		sum=0;
		for (int i = 0; i < riga; ++i)
		{
			sum=sum + *(*(mat + i)+j);
		}
		v[j]=sum;
		printf("\n");
	}

	return j;
}

void array_visualizza(int v1[], int v2[], int a, int b)
{
	printf("Somma array righe\n");
	for (int i = 0; i < a; ++i)
	{
		printf("v1 [ %d ] : %d\n",i,*(v1+i) );
	}
	printf("\n\nSomma array colonne\n");
	for (int i = 0; i < b; ++i)
	{
		printf("v2 [ %d ] : %d\n",i,*(v2+i) );
	}
}

int main(int argc , const char *argv[])
{	

	if (argc != 5 || atoi(argv[3])>atoi(argv[4]) || atoi(argv[1])==0 || atoi(argv[2])==0 )
	{
		printf("Errore! Inserire quattro parametri (righe della matrice, colonne della matrice, estremo inferiore del numero casuale, estremo superiore del numero casuale) \n");
		return 1;
	}
	else
	{
		int r=atoi(argv[1]);
		int c=atoi(argv[2]);
		int n1=atoi(argv[3]);
		int n2=atoi(argv[4]);

		int m[r][C];
		int vR[r*C];
		int vC[r*C];

		matrice_genera(r,m,n1,n2);
		matrice_visualizza(r,m);
	
		int somR=array_riga(r,m,vR);
		int somC=array_colonna(r,m,vC);

		array_visualizza(vR,vC,somR,somC);
	}

return 0;
}
