#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<ctime>
#include<time.h>

#define R 5
#define C 5

void matrice_genera(int rig,int mat[][C],int a,int b)
{
	srand(time(NULL));
	for (int i = 0; i < rig; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			mat[i][j]=rand()%(b-a+1)+a ;
		}
	}
}

void matrice_visualizza(int rig,int mat[][C])
{
	for (int i = 0; i < rig; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			printf("%d\t", *(*(mat + i)+j) );
		}
		printf("\n");
	}
}

void matrice_bordi(int riga,int mat[][C],int sum)
{
	for (int i = 0; i < riga; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			if (i==0 || i==riga-1 || j==0 || j==C-1)
			{
				sum=sum+*(*(mat + i)+j);
			}
		}
	}

	printf("\nLa sommatoria vale : %d\n",sum );
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
		matrice_genera(r,m,n1,n2);
		matrice_visualizza(r,m);
	
		int s;

		matrice_bordi(r,m,s);
	}	

return 0;
}
