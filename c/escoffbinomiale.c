#include<iostream>
#include<math.h>

double fatt(double v)
{
	double fatt=1;
	int i=0;

	while(i<v)
	{
		fatt=fatt*(i+1);
		i++;
	}

	return fatt;
}

int main()
{	

	double n,k;
	int ris;

	printf("Inserire il primo valore del coefficente binomiale : ");
	scanf("%lf",&n);
	printf("Inserire il secondo valore del coefficente binomiale : ");
	scanf("%lf",&k);

	int f1,f2,f3;

	f1=fatt(n);
	f2=fatt(k);
	f3=fatt(n-k);

	ris=f1/(f2*f3);
	printf("Il risultato e' : %d\n",ris);

	return 1;
}