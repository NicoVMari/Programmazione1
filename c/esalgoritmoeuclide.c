#include<stdlib.h>
#include<math.h>
#include <stdio.h>

int main(){

int a,b,c;

printf("Inserire il primo numero di cui vuoi sapere MCD : ");
scanf("%d",&a);
printf("Inserire il secondo numero di cui vuoi sapere MCD : ");
scanf("%d",&b);

int m1,m2,mcm;
m1=a;
m2=b;

if (b>a)
{
	c=a;
	a=b;
	b=c;
}
if (b==0)
{
   printf("MCD dei numeri inseriti e' : %d\n",a);
   exit(0);
}

if (a>b && b>=0)
{
	do{

		int q,r;
		q=a/b;
		r=a%b;
       
      printf("%d : %d --> q = %d , r = %d\n",a,b,q,r ); 
		printf("%d = %d * %d + %d\n\n",a,q,b,r );

	 a=b;
    b=r;
    q=0;
    r=0;

	}while(b!=0);
}

mcm=abs(m1*m2)/a;

printf("MCD( %d , %d ) = %d\n",m1,m2,a);
printf("mcm( %d , %d ) = %d\n",m1,m2,mcm);


}

