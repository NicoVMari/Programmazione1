//CRESCENTE
#include<stdio.h>
#include<math.h>

#define DIM 5

int main(){
	
int vett[DIM];

for (int i = 0; i < DIM; ++i)
{
	printf("v [%d] = ", i);
	scanf("%d",&vett[i]);
}

int c ;

for (int i = 0; i < DIM -1 ; ++i)
{
	for (int j = i+1; j < DIM; ++j)
	{
		if (vett[i]>vett[j])
		{
			c=vett[i];
			vett[i]=vett[j];
			vett[j]=c;
		}
	}
}

for (int i = 0; i < DIM; ++i)
{

printf("%d\t",vett[i]);

}

}

/* DECRESCENTE
#include<stdio.h>
#include<math.h>

#define DIM 5

int main(){
	
int vett[DIM];

for (int i = 0; i < DIM; ++i)
{
	printf("v [%d] = ", i);
	scanf("%d",&vett[i]);
}

int c ;

for (int i = 0; i < DIM -1 ; ++i)
{
	for (int j = i+1; j < DIM; ++j)
	{
		if (vett[i]<vett[j])
		{
			c=vett[i];
			vett[i]=vett[j];
			vett[j]=c;
		}
	}
}

for (int i = 0; i < DIM; ++i)
{

printf("%d\t",vett[i]);

}

}
*/