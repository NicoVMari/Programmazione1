#include<stdio.h>

int main(){

int x;
int som=0;

do
{
	printf("Inserisci il valore da sommare : \n");
	scanf("%d",&x);
    som=som+x;
} while (x!=0);

printf("La somma vale : %d\n", som);

}