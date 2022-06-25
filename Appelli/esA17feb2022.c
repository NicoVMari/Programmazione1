#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define LEN 30

int insert_string(char s[])
{
	long long unsigned int l;

	do
	{
		printf("Inserisci stringa : ");
		scanf("%s",s);

		l=strlen(s);

		if (l%2==1)
		{
			printf("ERRORE , inserire una stringa con caratteri pari\n");
		}

	} while(l%2==1);

	return (int)l;
}

void count_string(char s[],int l, int *p1,int *p2)
{
	for (int i = 0; i < l; ++i)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			*p1 += 1;
		}

		if (isdigit(s[i]))
		{
			*p2 += 1;
		}
	}
}

int aggiorna_string(char s[],int l1,char c,int ind)
{

	if (ind > l1)
	{
		return l1;
	}
	else
	{
		l1++;

		for (int i = l1; i > ind ; --i)
		{
			s[i]=s[i-1];
		}

		s[ind]=c;

		return l1;
	}
}

void salva_string(char s[],int l,const char nfile[])
{
	FILE *fp=NULL;
	fp=fopen(nfile,"w");

	if (fp == NULL)
	{
		printf("ERRORE nell'apertura del file\n");
		exit(2);
	}
	else
	{
		for (int i = 0; i < l/2; ++i)
		{
			fprintf(fp, "%c",s[i]);
		}

		fclose(fp);
	}
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf("ERRORE , non inserimento del file da terminale\n");
		exit(1);
	}
	else
	{
		char s[LEN],c;
		int p1=0,p2=0,ind;

		int l1=insert_string(s);
		printf("\nLa stringa inserita corrisponde a : %s\nCon la lunghezza di %d caratteri\n",s,l1);

		count_string(s,l1,&p1,&p2);
		printf("All'interno della stringa ci sono %d vocali minuscole\nAll'interno della stringa ci sono %d cifre ",p1,p2 );

		printf("\n\nInserire un carattere: ");
		scanf("\n%c",&c);
		printf("Inserire un indice: ");
		scanf("%d",&ind);

		int l2=aggiorna_string(s,l1,c,ind);
		printf("\nLa stringa aggiornata corrisponde a : %s\nCon la lunghezza di %d caratteri\n",s,l2);

		salva_string(s,l2,argv[1]);
		printf("Scrittura parziale della stringa su file avvenuta correttamente\n");
	}

	return 0;
}