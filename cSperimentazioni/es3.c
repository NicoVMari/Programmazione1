#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<ctime>
#include<time.h>

#define R 5
#define C 5

void matrice_genera(int mat[][C])
{
	srand(time(NULL));
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			mat[i][j]=rand()%(100-0+1)+0 ;
		}
	}
}

void matrice_visualizza(int mat[][C])
{
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			printf("%d\t", *(*(mat + i)+j) );
		}
		printf("\n");
	}
}

int array_riga(int mat[][C],int v[])
{
	int sum,i;

	for ( i = 0; i < R; ++i)
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

int array_colonna(int mat[][C],int v[])
{
	int sum,j,i;

	for (int j = 0; j < C; ++j)
	{
		sum=0;
		for (int i = 0; i < R; ++i)
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

int main()
{	
	int m[R][C];
	int vR[R*C];
	int vC[R*C];

	matrice_genera(m);
	matrice_visualizza(m);
	
	int somR=array_riga(m,vR);
	int somC=array_colonna(m,vC);

	array_visualizza(vR,vC,somR,somC);

return 0;
}
