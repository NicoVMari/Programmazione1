#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

//#define R 3
#define C 4

void matrice_genera(int rig,int col,int mat[][col],int a,int b)
{
	srand(time(NULL));
	for (int i = 0; i < rig; ++i)
	{
		for (int j = 0; j < col; ++j)
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

int array_pari(int rig , int mat[][C],int v[])
{

	int k=0;

	for (int i = 0; i < rig; ++i)
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

	return k-1;

}

void array_visualizza(int v[],int k)
{
	for (int i = 0; i < k; ++i)
	{
		printf("%d\t", *(v+i) );
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
		int v[r*C];
		matrice_genera(r,c,m,n1,n2);
		matrice_visualizza(r,m);
	
		int n=array_pari(r,m,v);
		printf("Elementi pari %d\n",n );
		array_visualizza(v,n);

	}

	

return 0;
}
