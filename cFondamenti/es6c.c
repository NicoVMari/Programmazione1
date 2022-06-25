#include<stdio.h>

int main(){

int x,y,som=0;
printf("Inserisci il primo valore : \n");
scanf("%d", &x);
printf("Inserisci il secondo valore : \n");
scanf("%d", &y);

for (int i = 0; i < y; ++i)
{
	som=som+x;
}

printf("Prodotto : %d\n", som );
}