#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define STR 300
#define LEN 30

int load_string(char s[][LEN],const char nfile[])
{
	FILE *fp=NULL;
	fp=fopen(nfile,"r");

	int q = 0;

	if (fp == NULL)
	{
		q =-1;
	}
	else
	{
		while(fscanf(fp,"%s",s[q]) != EOF)
		{
			q++;
		}
	}

	fclose(fp);

	return q;
}

void stamp_string(char s[][LEN], int q)
{
	for (int i = 0; i < q ; ++i)
	{
		printf("%d: %s\t\t",i,s[i]);

		if ((i+1)%3==0)
		{
			printf("\n");
		}
	}
}

int find_string(char s[][LEN],int q, char parola[])
{
	int flag = 0;

	for (int i = 0; i < q; ++i)
	{
		if (strcmp(s[i],parola) == 0)
		{
			flag = 1;
		}
	}

	return flag;
}

int conta(char s[][LEN], int q)
{
	int c=0;

	for (int i = 0; i < q; ++i)
	{
		if (s[i][0] == 'A' || s[i][0] == 'E' || s[i][0] == 'I' || s[i][0] == 'O' || s[i][0] == 'U' || s[i][0] == 'a' || s[i][0] == 'e' || s[i][0] == 'i' || s[i][0] == 'o' || s[i][0] == 'u')
		{
			c++;
		}
	}

	return c;
}

int main(int argc, char const *argv[])
{
	
	if (argc != 2)
	{
		printf("ERRORE , non inserimento del file da riga di comando\n");
		exit(1);
	}
	else
	{
		char s[STR][LEN],parola[LEN];

		int q=load_string(s,argv[1]);

		if (q == -1)
		{
			printf("ERRORE , apertura del file non riuscita\n");
			exit(1);
		}

		stamp_string(s,q);

		printf("\nInserisci una parola da ricercare all'interno del vettore : ");
		scanf("%s",parola);

		int esito=find_string(s,q,parola);

		if (esito==0)
		{
			printf("La parola inserita e' assente\n");
		}
		else if (esito == 1)
		{
			printf("La parola inserita e' presente\n");
		}

		int count=conta(s,q);
		printf("\nIl numero di parole che iniziano per vocale sono : %d\n", count);

	}

	return 0;
}