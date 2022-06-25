#include<stdio.h>
#include<math.h>

#define DIM 10

int main(){
	
int vett[DIM];

for (int i = 0; i < DIM; ++i)
{
	printf("v [%d] = ", i);
	scanf("%d",&vett[i]);
}

int i=0,j=DIM-1,p=0,m,x;

printf("Inserire il valore da ricercare nel vettore : \n");
scanf("%d",&x);

while(i<=j && p==0){
    printf("Considera la posizione tra %d e %d \n",i,j );
	m=(i+j)/2;
	printf("Cerco in posizione %d\n",m );
	if (x==vett[m])
	{
		p=1;
	}else if (x>vett[m])
	{
		i=m+1;
	}else
		j=m-1;

}

if (p==1)
{
	printf("%d e' presente\n", x);
}else
	printf("%d non e' presente\n", x);

}