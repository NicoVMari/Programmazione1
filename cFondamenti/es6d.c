#include<iostream>
#include<math.h>

int main(){
	
int vett[8],c,temp, cont;

temp = 0, cont = 0;

for (int i = 0; i < 8; ++i)
{
	printf("v [%d] = ", i);
	scanf("%d",&vett[i]);
}

printf("Inserire il valore da ricercare nel vettore : \n");
scanf("%d",&c);

for (int i = 0; i < 8 ; ++i)
{
	if (vett[i]==c)
	{		
		temp=1;
		cont++;		
	}
}

if (temp==0)
{
	printf("Il valore cercato non e' presente nel vettore\n");
}else if (temp==1)
{
	printf("Il valore cercato e' presente nel vettore\n");
}

	printf("Il valore cercato e' peresnete %d volte \n", cont);

}