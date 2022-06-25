#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NUM 30 //numero stringhe
#define LEN 20 //numero caratteri

//prototipi
int carica_str(char str[][LEN],FILE *fp);
void visualizza_str(char str[][LEN],int q);
int cerca_str(char str[][LEN],int q,char s[]);
void inserisci_str(char str[][LEN],int *q,char s[]);

int main(int argc, char const *argv[])
{
	if (argc != 2) //controllo che sia passato il file da terminale
	{
		printf("Errore, nessun file caricato\n");
		return 1;
	}
	else
	{
		FILE *f=NULL; //creo il puntatore al file e lo inizializzano a null
		f=fopen(argv[1],"r");

		if (f == NULL)
		{
			printf("Errore, apertura file non riuscito\n");
			return 2;
		}
		else
		{
			char s[NUM][LEN],stringa[LEN],stringa2[LEN]; //creo un vettore di scringhe e due vettore di caratteri

			int q=carica_str(s,f); //richiamo la funzione per caricare la stinga dal file
			fclose(f); // chiudiamo il file 

			visualizza_str(s,q); //viene richiamata la funzione per leggere le stringhe

			printf("\nInserire parola da cercare nel vettore : ");
			scanf("%s",stringa);

			int ris=cerca_str(s,q,stringa); //richiamo la funzione per la ricerca di una parola all'interno del vettore

			if (ris==-1)
			{
				printf("Parola assente\n");
			}
			else
			{
				printf("Parola presente nell'indice : %d\n", ris);
			}

			printf("\nInserire parola da inseire nel vettore : ");
			scanf("%s",stringa2);

			inserisci_str(s,&q,stringa2);//richiamo la funzione per per inserire una parola nel vettore
			visualizza_str(s,q);
		}

	}
	return 0;
}

int carica_str(char str[][LEN],FILE *fp)
{
	int q=0;
	char parola[LEN];

	while(fscanf(fp,"%s",parola) != EOF) //vengolo lette tutte le parole del file e inserito dentro a parola[] fino all EOF
	{
		//vengono selezionale solo per parole con almeno 4 caratteri e che inizino con una vocale
		if (strlen(parola)>=4 && (parola[0]=='A' || parola[0]=='E' || parola[0]=='I' || parola[0]=='O' || parola[0]=='U' || parola[0]=='a' || parola[0]=='e' || parola[0]=='i' || parola[0]=='o' || parola[0]=='u')) 
		{
			strcpy(str[q],parola); //nel caso vengano soddisfatte le richieste la parola viene copiata all'interno del vettore di stringhe
			q++;
		}
	}

	if (q==0)
	{
		printf("Errore, nessuna parola non rispetta i controlli\n");
		exit(1);
	}

	return q; //ruturna la quantità di parole
}

void visualizza_str(char str[][LEN],int q)
{
	for (int i = 0; i < q; ++i)//visualizza le parole fino alla fine del vettore
	{
		printf(" %d)%s ",i,str[i]);
		if (i < q-1)
		{
			printf("-");
		}
	}

	printf("\n");
}

int cerca_str(char str[][LEN],int q,char s[])
{
	int r=-1; //premessa di non presenza della parola 

	for (int i = 0; i < q; ++i)
	{
		if(strcmp(str[i],s)==0) //viene comparata ogni parola del vettore alla parola che vuole essere cercata
			r=i;
	}

	return r;
}

void inserisci_str(char str[][LEN],int *q,char s[])
{
	(*q)++; //aggiorna il valore della grandezza del vettore in quanto deve essere inserito una nuova parola nel quarto posto 

	for (int i=(*q)-1; i>=4; i--) //lettura del vettore dalla fine 
	{
		strcpy(str[i], str[i-1]); //viene copiata le parole nella posizione precedente così da lasciare la posizione 4 vuota
	}

	strcpy(str[3], s); //copiata nella posizione 4 la parola aggiuntivad
}