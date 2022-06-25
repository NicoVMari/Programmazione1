#include<iostream>
#include<math.h>

#define DIM 10

void carica_vettore(int v[], int dim, int q)
{

	for (int i = 0; i < q; ++i)
	{
		printf("v [ %d ] : ",i );
		scanf("%d",&v[i]);
	}

	v[q]=-1;
}

int cerca_posizione(int v[],int val,int o)
{
	int conta=0;
	int pos;
	int flag=0;

	for (int i = 0; v[i]!=-1 && conta < o; ++i)
	{
		if (val==v[i])
		{
			conta++;
		}
		if (conta==o)
		{
			pos=i;
			flag=1;
		}
	}

	if (flag==0)
	{
		pos=-1;
	}

	return pos;
}

int main()
{	
	int v[DIM],x,k,posizione;

	int q;

	do
	{
		printf("Quanti valori vuole inserire : ");
		scanf("%d",&q);

		if (q >= DIM)
		{
			printf("ERRORE  quantità superiore alla dimensione\n");
		}

	}while (q >= DIM);


	carica_vettore(v,DIM,q);

	printf("Inerire valore da cercare : ");
	scanf("%d",&x);
	printf("Inerire valore dell'occorrenza : ");
	scanf("%d",&k);

	posizione=cerca_posizione(v,x,k);

	printf("Il numero %d nell'occorrenza %d e' nella posizione : %d\n",x,k,posizione);

	return 1;
}