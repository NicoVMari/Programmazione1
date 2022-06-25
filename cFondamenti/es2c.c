#include<stdio.h>

int main(){

int i,x,y,max1,max2;
int n;

printf("Quanti valori? : \n");
scanf("%d",&n);

i=0;


while(i<n){

printf("Inserisci valore : \n");
scanf("%d",&x);

if (i==0)
{
	max1=x;
	max2=0;
}else if (x>max2)
{
	if (x>max1)
	{
		max2=max1;
		max1=x;
	}
	else
	{
		max2=x;
	}
}

//printf("Il primo massimo e' : %d\n",max1 );
//printf("Il secondo massimo e' : %d\n",max2 );

i++;

}

printf("Il primo massimo e' : %d\n",max1 );
printf("Il secondo massimo e' : %d\n",max2 );

}