#include<stdio.h>

int main(){

int n,i,som;


som=0;

printf("Inserire il numero di valori che si vogliono sommare\n");
scanf("%d",&n);

/*
i=0;

while(i<n){

som= som + i;

i++;
}

printf("La somma dei primi %d numeri e' : %d\n",n,som );*/

/*
i=0;

do
{
	som= som + i;
    i++;

} while (i<n);

printf("La somma dei primi %d numeri e' : %d\n",n,som );*/

for (int i = 0; i < n; ++i)
{
	som=som+i;
}

printf("La somma dei primi %d numeri e' : %d\n",n,som );

}