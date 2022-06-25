#include <stdio.h>
#include <string.h>

#define DIM 100

int main()
{
	char s[DIM];
	int l;
	int conta_vocali=0;
	int conta_consonanti=0;
	char c ;
	int cont;

	printf("Inserire una frase :\n");
	scanf("%s",s);

	l=strlen(s);

	for (int i = 0; i < l; ++i)
	{
		if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			conta_vocali++;
		}
		else
		{
			conta_consonanti++;
		}
	}

	printf("\n%d vocali\n\n",conta_vocali );
	printf("%d consonanti\n\n",conta_consonanti );

	for ( c = 'a'; c <= 'z'; ++c)
	{
		cont = 0;
		for (int i = 0; i < l; ++i)
		{
			if (c==s[i])
			{
				cont++;
			}
		}
	if (cont==0)
	{
		printf("%c assente\n", c);
	}else
	{
		printf("%c presente per %d volte\n",c,cont );
	}
	}

	

}