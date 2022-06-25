#include<iostream>
#include<math.h>
#include<string.h>

#define DIM 10

int main(){
	
	char s[DIM];
	int flag,i,j;

	printf("Inserisci la stringa : ");
	scanf("%s",s);

	i = 0 ;
	j =(strlen(s)-1);


	flag=1; //assumo che sia palindroma

	while(i<j)
	{
		if (s[i] != s[j])
		{
			flag=0; //non palindroma
		}

		i++;
		j--;
	}

	if (flag) //flag==1
	{
		printf("Palindroma\n");
	}else
		printf("No Palindroma\n");

}