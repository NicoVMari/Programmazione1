#include<stdio.h>

int main(){

int i,x,max;

int n;

printf("Quanti valori? : \n");
scanf("%d",&n);

i=0;
max=0;

while(i<n){

printf("Inserisci valore : \n");
scanf("%d",&x);

if (x>max)
{
	max=x;
}
else
   max=max;
i++;

}

printf("Il massimo e' : %d\n",max );


}