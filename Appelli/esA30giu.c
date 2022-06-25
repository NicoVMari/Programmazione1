#include<stdio.h>

#define DIM 30 //grandezza vettore

//prototipi
int carica_v(int vett[], const char nfile[]);
void visualizza_v(int vett[]);
void somma_v(int vett[],int *s1,int *s2);
void cancella_primo(int vett[]);

int main(int argc, char const *argv[])
{

	if (argc != 2) //controllo che sia passato il file da terminale
	{
		printf("Errore , non inserimento nome file\n");
		return 1;
	}
	else
	{
		int v[DIM]; //creo il vettore

		int c=carica_v(v,argv[1]); //richiamo la funzione per caricare il vettore dal file
		if (c==0)
		{
			printf("Errore, nell'apertura del file\n");
			return 2;
		}
		else
		{
			visualizza_v(v); //richiamo la funzione visualizzare il vettore

			int s1=0,s2=0;

			somma_v(v,&s1,&s2); //richiamo la funzione per sommare e passo due indirizzi di memoria
			printf("\nLa somma dei valori composti da una cifra e' : %d\n",s1);
			printf("La somma dei valori composti da due cifre e' : %d\n",s2);

			cancella_primo(v); //richiama la funzione per cancellare il primo elemento 
			visualizza_v(v); //ri-visualizza il vettore
		}
	}

	return 0;
}

int carica_v(int vett[], const char nfile[])
{
	FILE *f=NULL; //creo il puntatore al file e lo inizializzo a nullo
	f=fopen(nfile,"r"); //apro il file in lettura

	if (f==NULL) //nel caso ci sia un problema nell'apertura del file returna 0
	{
		return 0;
	}
	else
	{
		int x,i=0;

		while(fscanf(f,"%d",&x) != EOF) //creo un ciclo per leggere i valori dal file fino alla fine del file ossia fino al EOF
		{
			if (x > 0 && x%2==1) //controllo che il dato letto dal file sia maggiore di 0 e dispari per poi inserirlo all'interno del vettore
			{
				vett[i]=x;
				i++;
			}
		}

		fclose(f); //chiudo il file

		vett[i]=-1; //metto il tappo al vettore

		return 1;
	}
}

void visualizza_v(int vett[])
{
	printf("\nIndici\tValori\n");
	for (int i = 0; vett[i] != -1; ++i) //visualizzo il vettore fino al tappo ossia fino al -1
	{
		printf("%d\t%d\n",i,vett[i]);
	}
}

void somma_v(int vett[],int *s1,int *s2)
{
	for (int i = 0; vett[i] != -1; ++i)
	{
		if (vett[i]<10) // somma dei valori composti da una cifra
		{
			*s1=*s1+vett[i];
		}
		else if (vett[i] > 9 && vett[i] < 100) // somma dei valori composti da due cifra
		{
			*s2=*s2+vett[i];
		}
			
	}
}

void cancella_primo(int vett[])
{
	printf("\nEliminazione primo elemento del vettore\n");
	for (int i = 0; vett[i] != -1; ++i) //per cancellare il primo valore viene fatto uno shift a dx
	{
		vett[i]=vett[i+1];
	}
}