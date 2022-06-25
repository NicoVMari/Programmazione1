#include<iostream>
#include<math.h>

void carica(int v1[],int v2[] , int n1,int n2)
{
	printf("Primo vettore\n");
	for (int i = 0; i < n1; ++i)
	{
		printf("v1 [%d] = ", i);
		scanf("%d",&v1[i]);
	}

	printf("\nSecondo vettore \n");
	for (int i = 0; i < n2; ++i)
	{
		printf("v2 [%d] = ", i);
		scanf("%d",&v2[i]);
	}

	printf("\n");

}

void fusione(int v1,int v2, int v3, int n1,int n2 ,int n3)
{
	int i=0,j=0,k=0;

	while(i<n1 || j<n2){
		if (v1[i]<v2[j])
		{
			v3[k]=v1[i];
			k++;
			i++;
		}
		else
		{
			v3[k]=v2[j];
			k++;
			j++;
		}
	}

	if (i==n1)
	{
		while(j<n2)
		{
			v3[k]=v2[j];
			k++;
			j++;
		}
	}

	if (j==n2)
	{
		while(i<n1)
		{
			v3[k]=v1[i];
			k++;
			i++;
		}
	}
}

void stampa(int v[], int dim)
{
	printf("Vettore Fusione  :\n");
	for (int i = 0; i < n; ++i)
	{
		printf("v [ %d ] = %d\n",i,v3[i]);
	}
}

int main(){

	int n1,n2;

	printf("Inserire grandezza del primo vettore minore di 20 : ");
	scanf("%d",&n1);
	printf("Inserire grandezza del secondo vettore minore di 20 : ");
	scanf("%d",&n2);

	int v1[n1];
	int v2[n2];

	carica(v1,v2,n1,n2);

	int v3[n1+n2];

	fusione(v1,v2,v3,n1,n2,n1+n2);
	stampa(v3,n1+n2);


	return 0;

}

