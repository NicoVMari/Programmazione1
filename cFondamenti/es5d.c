#include<iostream>
#include<math.h>

int main(){
	
int vett[8];

for (int i = 0; i < 8; ++i)
{
	printf("v [%d] = ", i);
	scanf("%d",&vett[i]);
}

int M;

M=vett[0];

for (int i = 0; i < 8; ++i)
{

	if (M<vett[i])
	{
		M=vett[i];
	}

}

int m;

m=vett[0];

for (int i = 0; i < 8; ++i)
{

	if (m>vett[i])
	{
		m=vett[i];
	}

}

printf("Il minore e' %d\n",m );
printf("Il maggiore e' %d\n",M );


}