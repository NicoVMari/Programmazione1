#include<stdio.h>

int main(){

int x,i=0,fatt=1;

printf("Inserisci il fattotiale : \n");
scanf("%d", &x);

while(i<x){

	fatt=fatt*(i+1);
	i++;
}

printf("Risultato fattoriale : %d\n", fatt);

}