#include<stdio.h>
#include<math.h>


#define R 3
#define C 3

int main(){
	
	int m[R][C];

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			printf(" m[ %d ][ %d ] : ", i ,j );
            scanf("%d",&m[i][j]);
		}
	}

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			printf("%d\t", m[i][j] );
		}
		printf("\n");
	}



}