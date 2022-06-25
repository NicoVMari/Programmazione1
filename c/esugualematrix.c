#include<iostream>
#include<math.h>


#define R 3
#define C 3

int main(){
	
	int m1[R][C], m2[R][C];

    printf("\nPrima matrice\n");
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			printf("m1 [ %d ] [ %d ] : ", i ,j );
            scanf("%d",&m1[i][j]);
		}
	}

	printf("\nSeconda matrice\n");
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			printf("m2 [ %d ] [ %d ] : ", i ,j );
            scanf("%d",&m2[i][j]);
		}
	}

	int p=1;

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			if (m1[i][j] != m2[i][j])
			{
				p=0;
			}
		}
	}

	if (p)
	{
		printf("\nMatrici uguali\n");
	}else
		printf("\nMatrici diverse\n");

}