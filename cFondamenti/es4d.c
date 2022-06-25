#include<iostream>
#include<math.h>

int main(){
	
	int vett[8];

	for (int i = 0; i < 8; ++i)
	{
		printf("v [%d] = ", i);
		scanf("%d",&vett[i]);
	}

	for (int i = 0; i < 8; ++i)
	{
		if (vett[i]%2==0)
		{
			printf("%d\t",vett[i]);
		}
	}


}