//nome, cognome, matricola e fila
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define DIM 5 //dimensione matrice quadrata

//prototipi
void genera_matrice(int [DIM][DIM],int,int);
void visualizza_matrice(int[DIM][DIM]);
void cerca(int[DIM][DIM],int,int*,int*);
int salva_riga(int[DIM][DIM],int,const char[]);

void scambia_matrice(int m[][DIM])
{
	int c;

    for (int i = 0; i < DIM; i++)    // SI
    {
    	c=m[i][DIM-1];
    	m[i][DIM-1]=m[DIM-1][i];
    	m[DIM-1][i]=c;
    }
}

int main(int argc, char const *argv[])
{
	//controllo che che i dati inseriti da terminale vadano bene, valori nulli oppure il secondo è minore del primo
	if(argc!=4 || atoi(argv[1]) == 0 || atoi(argv[2])== 0 || atoi(argv[2])<atoi(argv[1])) 
	{
		printf("ERRORE\n");
		return 1;
	}
	else
	{
		int a,b;

		a=atoi(argv[1]); //grazie ad atoi() viene convertito la string in intero
		b=atoi(argv[2]);

		int m[DIM][DIM]; //creazione matrice quadrata
		int x,riga,col,indicer,ris;

		genera_matrice(m,a,b); //richiama la funzione per creare la matrice
		visualizza_matrice(m); // richiama la funzione per visualizzare la matrice

		printf("Inserire un valore da cercare nella matrice : ");
		scanf("%d",&x);

		cerca(m,x,&riga,&col); //richiamo la funzione per la ricerca di un valore all'interno della matrice e lo salvo in due indirizzi di memoria che corrispondono alla riga e colonna
		if (riga == -1 && col == -1)
		{
			printf("Il valore %d non e' presente nella matrice\n", x); 
		}
		else
		{
			printf("il valore %d nella matrice e' r,c = (%d,%d) \n",x,riga,col);
		}

		printf("\nInserire un indice di una riga :"); 
		scanf("%d",&indicer);

		scambia_matrice(m);

		visualizza_matrice(m);

		ris=salva_riga(m,indicer,argv[3]); //richiamo la funzione per salvare una riga all'interno di un file
		if (ris==1)
		{
			printf("La riga con indice %d e' stata salvata nel file %s.\n\n", indicer, argv[3]);
		}
		else
			if (ris==0)
			{
				printf("L'indice %d non e' compatibile con la dimensione %d.\n\n", indicer, DIM);
				return 2;
			}
			else
			{
				printf("ERRORE: la scrittura del file %s e' fallita.\n\n", argv[3]);
				return 3;
			}
	}

	return 0;
}

void genera_matrice(int m[DIM][DIM],int a,int b)
{
	srand((unsigned)time(NULL)); 

	for (int i = 0; i < DIM; ++i)
	{
		for (int j = 0; j < DIM; ++j)
		{
			m[i][j]=rand()%(b-a+1)+a; //usare questa formula per avere numeri casuali da a a b
		}
	}

}

void visualizza_matrice(int m[DIM][DIM])
{
	int sum=0;

	for (int i = 0; i < DIM; ++i)
	{
		for (int j = 0; j < DIM; ++j)
		{
			printf("%d\t",m[i][j]); //visualizza la matrice 
			sum = sum + m[i][j];
		}
		printf("Somma : %d\n",sum ); //visualizza la somma deglie elementi della matrice per ogni riga
	}

	printf("\n");
}

void cerca(int m[DIM][DIM],int n,int *riga,int *col)
{
	*riga=-1; //primo puntatore inizializzato a -1
	*col=-1; //secondo puntatore inizializzato a -1

	for (int i = 0; i < DIM && *riga ==-1 && *col ==-1; ++i) //ricerca della prima occorrenza del valore ricercato sulla riga e colonna
	{
		for (int j = 0; j < DIM && *riga ==-1 && *col ==-1; ++j)
		{
			if (m[i][j] == n)
			{
				*riga=i;
				*col=j;
			}
		}
		
	}
}

int salva_riga(int m[DIM][DIM], int r, const char nfile[])
{
	int e;
	FILE* fp; //inizializzo il puntatore al file

	if (r < 0 || r>DIM)
		e=0;
	else
	{
		fp=fopen(nfile , "w"); //in caso la riga richiesta sia compatibile viene aperto il file in scrittura
		if (fp==NULL) //se dentro al file non ci sta nulla ci fermiamo qua
			e=-1;
		else
		{
			for (int j = 0; j < DIM ; j++)
			{
				fprintf(fp, "%d\t", m[r][j]); //scrivo sul file la riga della matrice richista
			}

			fprintf(fp, "\n");
			fclose(fp); //chiudo il file
			e=1;
		}
	}
	return e;
}


