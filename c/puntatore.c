#include<iostream>
#include<math.h>

void incrementa(int* x)
{
	(*x)++;
}

int main(){
	int a;

	printf("Inserisci valore : ");
	scanf("%d",&a);

	incrementa(&a);
	printf("Valore aggiornato : %d\n", a);

}