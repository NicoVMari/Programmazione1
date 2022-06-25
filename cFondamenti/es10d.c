#include<iostream>
#include<math.h>

int main(){
	
int vett[4],c;

for (int i = 0; i < 4; ++i)
{
	printf("v [%d] = ", i);
	scanf("%d",&vett[i]);
}

for (int i = 0; i < 4; ++i)
{

printf("%d\t",vett[i]);

}

printf("\n\n");

for (int i = 0; i < 3; ++i)
{
	vett[i]=vett[i+1];
}

vett[3]=0;

for (int i = 0; i < 4; ++i)
{

printf("%d\t",vett[i]);

}

printf("\n\n");

c=vett[3];

for (int i = 3; i > 0; i--)
{
	vett[i]=vett[i-1];
}

vett[0]=c;

for (int i = 0; i < 4; ++i)
{

printf("%d\t",vett[i]);

}

}