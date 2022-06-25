#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define DIM 30 //dimensione stringa

//prototipi
void imposta_pass(char str[]);
void visualizza_pass(char *s);
void salva_pass(char str[],const char nomef[]);
int controllo_pass(char s1[],const char nfile[]);

int main(int argc, char const *argv[])
{
	
	if (argc != 2) //verifica che gli aromenti passati siano due, l'esegutivo e il file
	{
		printf("Errore, non inserimento del file\n");
		exit(1);
	}
	else
	{
		char s[DIM],s1[DIM]; //crea due vettori di string

		imposta_pass(s); //richiama funzione per impostare la password

		visualizza_pass(s); //richiama la funzione per stampare la password

		salva_pass(s,argv[1]); //richiama la funzione per salvare la password nel file



		printf("\nRe-inserire la password : "); //inserimento una seconda volta della password
		scanf("%s",s1);

		int n=controllo_pass(s1,argv[1]); //invoca la funzione per controllare la password se è uguale a quella precedentemente salvata sul file

		if (n==0)
			printf("La password inserita non e' uguale a quella salvata\n");
		else
			printf("La password inserita e' uguale a quella salvata\n");

	}

	return 0;
}

void imposta_pass(char str[])
{
	int conta=0,c;
	long long unsigned int l,i;

	do //ciclo do-while per inserire una password che soddisfi 
	{
		printf("\nInserire la password : "); //inserisce la stringa
		scanf("%s",str);

		l=strlen(str); //calcolo la lunghezza della pass

		for ( i = 0; i < l ; ++i)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				conta++;
			}
		}

		c=l >= 8 && conta >= 3; //conseguenza logica

		if (!c)
		{
			printf("Errore, inserire una password con almeno 8 caratteri tra cui almeno 3 lettere maiuscole\n");
		}
	} while (!c);
}

void visualizza_pass(char *s)
{
	long long unsigned int l=strlen(s);
	long long unsigned int i;

	for ( i = 0; i < l; ++i)
	{
		if (i != 0)	
			printf(" - ");

		printf(" %c ", *(s+i) ); // stampa la password tramite puntatori

			
	}
}

void salva_pass(char str[],const char nomef[])
{
	FILE *f=NULL; //creazione puntatore al file inizilmente nullo
	f=fopen(nomef,"w"); //apertura file in scrittura

	if (f == NULL) 
	{
		printf("Errore, nell'apertura del file\n");
		exit(1);
	}
	else
	{
		long long unsigned int l=strlen(str);
		long long unsigned int i;
		char c;

		for ( i = 0; i < l; ++i)
		{
			c = (char)((str[i]) + 3);
			fprintf(f, "%c", c ); //scrittura sul file la password
		}
	}

	fclose(f); //chiusura file
}

int controllo_pass(char s1[],const char nfile[])
{
	char s2[DIM];
	FILE *f=NULL; //creazione puntatore al file inizialmente nullo
	f=fopen(nfile,"r"); //apertura file in lettura

	int ris=1;

	if (f == NULL)
	{
		printf("Errore, nell'apertura del file\n");
		exit(1);
	}
	else
	{
		fscanf(f,"%s",s2); //lettura e inserimento della stringa letta all'interno del vettore di caratteri s2
		fclose(f);

		long long unsigned int l1=strlen(s1);
		long long unsigned int l2=strlen(s2);
		long long unsigned int i;

		if (l1 != l2)
		{
			ris=0;
		}
		else
		{
			for ( i = 0; i < l1 && ris==1; ++i) //confronto tra le due diverse stringhe
			{
				if (s1[i] != s2[i]-3)
				{
					ris=0;
				}
			}
		}
	}

	return ris;
}