#include <stdio.h>
#include <string.h>

#define DIM 20

int main()
{
	char s[DIM];
	int l;
	int c_maiuscole=0;
	int c_minuscole=0;
	int c_cifre=0;
	int c_punt=0;
	int p=0;

	do{
		printf("Inserire Password :\n");
		scanf("%s",s);

		l=strlen(s);

		for (int i = 0; i < l; ++i)
		{
			if (s[i]>='A' && s[i] <='Z')
			{
				c_maiuscole++;
			}
			if (s[i]>='a' && s[i] <='z')
			{
				c_minuscole++;
			}
			if (s[i]>='0' && s[i] <='9')
			{
				c_cifre++;
			}
			if (s[i]=='.' || s[i]==',' || s[i]==':' || s[i]=='?' || s[i]==';' || s[i]=='!' )
			{
				c_punt++;
			}

		}

		if (l>=8 && c_maiuscole>=1 && c_minuscole>=1 &&c_cifre>=1 && c_punt >=1)
		{
			p=1;
			printf("Password ACCETTATA\n");
		}else{
			p=0;
			printf("Password RIFIUTATA\n");
		}
		}while(p==0);
}