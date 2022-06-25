/*7) Realizzare un programma che calcoli la potenza di x elevato alla n (con x ed n interi acquisiti da tastiera) usando solo il prodotto.*/

#include<stdio.h>

int main(){

int x,n;
int prod=1;

printf("Inserisci il valore di cui vuoi la potenza : \n");
scanf("%d", &x);
printf("Inserisci la potenza : \n");
scanf("%d", &n);

for (int i = 0; i < n; ++i)
{
	prod=prod*x;
}

printf("Potenza : %d\n",  prod);
}