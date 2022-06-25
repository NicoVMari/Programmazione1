#include<iostream>
#include<math.h>

int max(int a, int b){

	if (a>b)
		return a;
	else
		return b;
}

int main(){
	
 	int a,b,M;

	printf("Inserisci due valori : \n");
	scanf("%d",&a);
	scanf("%d",&b);

	M=max(a,b);

	printf("Il massimo e' : %d\n",M );

	return 1;

}