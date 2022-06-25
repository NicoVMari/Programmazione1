#include<iostream>
#include<math.h>

#define DIM 10

int main(){
	
char s[DIM];

printf("Inserisci la stringa : ");
scanf("%s",s);

for (int i = 0; s[i]!='\0'; ++i)
{
	printf("%c", s[i]);
}

	printf("\n");

}