#include<stdio.h>
#include<math.h>

int main(){

/*
  n=numero in base 10 da convertire
  b=base che si vuole dare al numero convertito
  r=resto 
*/

	int n,b,r;
	int sc;


do{

printf("Inserire il numero in base 10 da convertire : ");
scanf("%d",&n);
printf("Inserire la base in cui si vuole convertire il numero : ");
scanf("%d",&b);

do
{	
	r=n%b;	
    printf("%d",r);
	n=(n-r)/b;

} while (n!=0);

printf("\n ( lettura al contrario del risultato )");

printf("\nVuole inserire altri numeri da convertire? ( Si=1 No=0 ) ");
scanf("%d",&sc);

n=0;b=0;r=0;

}while(sc!=0);

}