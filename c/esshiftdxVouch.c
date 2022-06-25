//Shift a DX NON CIRCOLARE
#include<stdio.h>
#include<math.h>

int main()
{
	
	int vett[5];

	for (int i = 0; i < 5; ++i)
	{
		printf("v [%d] = ", i);
		scanf("%d",&vett[i]);
	}

	for (int i = 4; i > 0; i--)
	{
		vett[i]=vett[i-1];
	}

	vett[0]=0;

	for (int i = 0; i < 5; ++i)
	{
		printf("v[%d] = %d\n",i,vett[i]);
	}

}

/*
//Shift a DX CIRCOLARE
#include<stdio.h>
#include<math.h>

int main()
{
	
	int vett[5],c;

	for (int i = 0; i < 5; ++i)
	{
		printf("v [%d] = ", i);
		scanf("%d",&vett[i]);
	}

	c=vett[4];

	for (int i = 4; i > 0; i--)
	{
		vett[i]=vett[i-1];
	}

	vett[0]=c;

	for (int i = 0; i < 5; ++i)
	{
		printf("v[%d] = %d\n",i,vett[i]);
	}

}
*/