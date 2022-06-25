#include<iostream>
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

int conta_occorrenze(char f[][38],char s[])
{
	int n_occorrenze=0;
	char *r=NULL;

	for (int i = 0; i < 3; ++i)
	{
		r=strstr(f[i],s);

		if (r!=NULL)
		{
			n_occorrenze++;
		}
	}

	return n_occorrenze;

}

int main()
{		
	char frase[3][38]={"ieri sono andato al mare","ieri sono andato in montagna","ieri sono andato a sciare in montagna"};

	char sc[64];

	array_visualizza(frase);

	printf("\nInserire una parola da cercare (massimo 64 caratteri) : ");
	scanf("%s",&sc);

	printf("%s\n", sc);

	int n=conta_occorrenze(frase,sc);

	printf("Numero di occorrenze : %d\n",n );

	return 0;
}
