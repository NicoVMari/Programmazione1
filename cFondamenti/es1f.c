#include<iostream>
#include<math.h>

void scambia(int* a,int* b){
	int k;

	k=*a;
	*a=*b;
	*b=k;
}

void ordina(int* x,int* y, int* z)
{
	//selection sort

	if (*x>*y)
	{
		scambia(x,y);
	}
	if (*x>*z)
	{
		scambia(x,z);
	}
	if (*y>*z)
	{
		scambia(y,z);
	}
}

int main(){
	int a,b,c;

	printf("Inserisci tre valori :");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	ordina(&a,&b,&c);


	printf("a = %d , b = %d , c = %d\n",a,b,c);
}