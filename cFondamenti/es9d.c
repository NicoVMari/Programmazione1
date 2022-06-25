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


for (int i = 0; i < 7; ++i)
{
	for (int j = i+1; j < 8; ++j)
	{
		if (vett[i]>=vett[j])
		{
			temp=1;
		}
	}
}

if (temp==0)
{
	printf("Strettamente crescenete\n");
}else
	printf("Non e' strettamente crescnete\n");


}