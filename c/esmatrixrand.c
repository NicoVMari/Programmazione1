#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<ctime>
#include<time.h>

#define R 3
#define C 3

int main(){
	
	int m[R][C];

	srand(time(NULL));
	 //srand ((unsigned) time (NULL));

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			m[i][j]=rand()%1000;
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