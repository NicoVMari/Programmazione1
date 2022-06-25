#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void array_visualizza(char f[][38])
{
	printf("Frasi del programma : \n");
	for (int i = 0; i < 3; ++i)
	{
		printf(" %d ) %s\n",i, *(f+i) );
	}
}

int array_modifica(char f[][38],char s)
{
	int n_occorrenze=0;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 38; ++j)
		{
			if (f[i][j]==s)
			{
				f[i][j]='*';
				n_occorrenze++;
			}
		}
	}

	return n_occorrenze;

}

int main()
{		
	char frase[3][38]={"ieri sono andato al mare","ieri sono andato in montagna","ieri sono andato a sciare in montagna"};

	char sc;

	array_visualizza(frase);

	printf("\nInserire un carattere da sostituire con * : ");
	scanf("%c",&sc);

	int n=array_modifica(frase,sc);

	printf("\nNumero di occorrenze di %c sostituite: : %d\n",sc,n );

	printf("\nFrasi del programma modificato : \n");
	for (int i = 0; i < 3; ++i)
	{
		printf(" %d ) %s\n",i, *(frase+i) );
	}

	return 0;
}
