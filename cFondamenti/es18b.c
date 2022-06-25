#include<stdio.h>
#include<math.h>

int main(){

	int l1,l2,l3;

	printf("Inserisci tre lati del triangolo : \n");
	scanf("%d",&l1);
    scanf("%d",&l2);
    scanf("%d",&l3);

    int c=(l1>0 && l2>0 && l3>0)||(l1<l3+l2 && l2<l1+l3 && l3<l1+l2)||(l1>abs(l2-l3) && l2>abs(l1-l3) && l3>abs(l2-l1));
    int ce=l1==l2 && l2==l3;
    int ci=l1==l2 && l2 != l3 || l2==l3 && l3 != l1 || l1==l3 && l3 != l2;
    int cs=l1!=l2 && l2!=l3 && l1!=l3;
    int cr=(l1/2==l2 || l1/2==l3)||(l2/2==l1 || l2/2==l3)||(l3/2==l2 || l3/2==l1);

    if(c){
        if(ce)
        	printf("E' un triangolo equilatero\n");
         if(ci)
            printf("E' un triangolo isoscele\n");
         if(cs && !cr)
        	printf("E' un triangolo scaleno\n");
         if(cr){     
            printf("E' un triangolo rettangolo\n");
			}

    }else
      printf("Non e' un triangolo\n");


}