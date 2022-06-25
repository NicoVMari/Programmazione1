#include<stdio.h>
#include<math.h>

double fatt(double n)
{
	double fatt=1;
	int i=0;

	while(i<n)
	{
		fatt=fatt*(i+1);
		i++;
	}

	return fatt;

}

int main(){

int n;

printf("Inserisci il fattotiale : \n");
scanf("%d", &n);

int f;

f=fatt(n);

printf("Risultato fattoriale : %d\n", f);

}