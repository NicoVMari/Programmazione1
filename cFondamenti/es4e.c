#include<iostream>
#include<math.h>
#define DIM 8

int v[DIM];
float med=0,som = 0;
int M,m;

void leggi(){

	for (int i = 0; i < DIM; ++i)
	{
		printf("v [ %d ] : ", i);
		scanf("%d",&v[i]);
	}

	printf("--------------------------\n");
}

float media(float med, int som){

	for (int i = 0; i < DIM; ++i)
	{
		som=som+v[i];
	}

	med=som/DIM;

	return med;
}

int max(int M){

	M=v[0];

	for (int i = 0; i < DIM; ++i)
	{
		if (M<v[i])
		{
			M=v[i];
		}
	}


	return M;
}

int min(int m){

	m=v[0];

	for (int i = 0; i < DIM; ++i)
	{
		if (m>v[i])
		{
			m=v[i];
		}
	}


	return m;

}

void stampa(float med, int M, int m){

	for (int i = 0; i < DIM; ++i)
	{
		printf(" v [ %d ] : %d\n",i,v[i] );
	}

	printf("La media e' : %.2f\n",med );
	printf("Il massimo e' : %d\n", M);
	printf("Il minimo e' : %d\n", m);

}

int main(){
	
	int massimo,minimo;
	float mediav;

	leggi();
	mediav=media(med,som);
	massimo=max(M);
	minimo=min(m);
	stampa(mediav,massimo,minimo);
}