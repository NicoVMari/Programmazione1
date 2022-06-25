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

void matrice_bordi(int mat[][C],int sum)
{
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			if (i==0 || i==R-1 || j==0 || j==C-1)
			{
				sum=sum+*(*(mat + i)+j);
			}
		}
	}

	printf("\nLa sommatoria vale : %d\n",sum );
}


int main()
{	
	int m[R][C];
	matrice_genera(m);
	matrice_visualizza(m);
	
	int s;

	matrice_bordi(m,s);

return 0;
}
