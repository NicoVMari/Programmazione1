#include<stdio.h>
#include<math.h>

int main(){

int a,b,n,m;

printf("Inserire il primo numero della congruenza : ");
scanf("%d",&a);
printf("Inserire il secondo numero della congruenza : ");
scanf("%d",&b);
printf("Inserire il modulo : ");
scanf("%d",&n);

if(a>b){
	m=a-b;
}else{
	m=b-a;
}

if (a%n==b%n && m%n==0)
{
	printf("%d congruo %d in modulo %d", a, b, n);
}else{

	printf("%d non e' congruo %d in modulo %d", a, b, n);
}

}