//Shift a SX NON CIRCOLARE
/*#include<iostream>
#include<math.h>

int main(){
	
int vett[5];

for (int i = 0; i < 5; ++i)
{
	printf("v [%d] = ", i);
	scanf("%d",&vett[i]);
}



for (int i = 0; i < 4; ++i)
{
	vett[i]=vett[i+1];
}

vett[4]=0;

for (int i = 0; i < 5; ++i)
{

printf("%d\t",vett[i]);

}

}*/
//Shift a SX CIRCOLARE
#include<iostream>
#include<math.h>

int main(){
	
int vett[5],c;

for (int i = 0; i < 5; ++i)
{
	printf("v [%d] = ", i);
	scanf("%d",&vett[i]);
}

c=vett[0];

for (int i = 0; i < 4; ++i)
{
	vett[i]=vett[i+1];
}

vett[4]=c;

for (int i = 0; i < 5; ++i)
{

printf("%d\t",vett[i]);

}

}