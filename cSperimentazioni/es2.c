#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define R 3
#define C 4

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

int array_pari(int mat[][C],int v[])
{

	int k=0;

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			if (*(*(mat + i)+j) % 2 == 0)
			{
				v[k]=*(*(mat + i)+j);
				k++;
			}
		}
		printf("\n");
	}

	return k;

}

void array_visualizza(int v[],int k)
{
	for (int i = 0; i < k; ++i)
	{
		printf("%d\t", *(v+i) );
	}
}

int main()
{	
	int m[R][C];
	int v[R*C];
	matrice_genera(m);
	matrice_visualizza(m);
	
	int n=array_pari(m,v);
	printf("Elementi pari %d\n",n );
	array_visualizza(v,n);


return 0;
}
