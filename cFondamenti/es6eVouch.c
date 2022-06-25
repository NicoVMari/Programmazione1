#include<iostream>
#include<math.h>
#include <string.h>
#define DIM 100

void cripta(char s[],int k)
{
	int l=strlen(s);

	for (int i = 0; i < l; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			if (s[i] !='z')
			{
				s[i]++;
			}
			else
				s[i]='a';
			
		}
	}
}


char decripta(char s[],int k)
{
	int l=strlen(s);

	for (int i = 0; i < l; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			if (s[i] !='a')
			{
				s[i]--;
			}
			else
				s[i]='z';
			
		}
	}
}

int main(int argc, char const *argv[])
{
	char s[DIM];

	int k;

	printf("Inserire la stringa in minuscolo e senza spazi :\n");
	scanf("%s",s);

	printf("Insrisci la chiave : ");
	scanf("%d",&k);

	cripta(s,k);
	printf("Parola cifrata : %s\n", s);

	decripta(s,k);
	printf("Parola decifrata : %s\n", s);


	return 0;
}

