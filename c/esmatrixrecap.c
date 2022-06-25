#include<iostream>
#include<math.h>


#define R 3
#define C 3

int main(){
	
	int mat[R][C];

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			printf("m1 [ %d ] [ %d ] : ", i ,j );
            scanf("%d",&mat[i][j]);
		}
	}

	int M = mat[0][0];
	int m = mat[0][0];

    for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			if (mat[i][j]>M)
			{
				M=mat[i][j];
			}
		}
	}

	printf("Il massimo e' : %d\n",M );

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			if (mat[i][j]<m)
			{
				m=mat[i][j];
			}
		}
	}


	printf("Il minimo e' : %d\n",m );

	int som=0;

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			som=som+ mat[i][j];
		}
	}

	printf("La somma e' : %d\n",som );

	int prod=1;

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			prod=prod * mat[i][j];
		}
	}

	printf("Il prodotto e' : %d\n",prod );

}