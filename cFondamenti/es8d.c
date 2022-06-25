#include<iostream>
#include<math.h>

int main(){
	
int vett[8],temp;

temp=0;

for (int i = 0; i < 8; ++i)
{
	printf("v [%d] = ", i);
	scanf("%d",&vett[i]);
}



for (int i = 0; i < 7 ; ++i)
{
	if (vett[i]==vett[i+1])
	{
		temp=1;
	}
}
if (vett[6]==vett[7])
{
	temp++;
}

if (temp == 2)
{
	printf("Il vettore e' tutto uguale\n");
}else
{
	printf("Il vettore non e' tutto uguale\n");
}

}