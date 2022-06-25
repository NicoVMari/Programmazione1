#include<stdio.h>
#include<math.h>
int main(){

int n1,n2,n3,n4,prod,somm;
float media;

printf("Inserisci il valore del primo numero\n");
scanf("%d",&n1 );
printf("Inserisci il valore del secondo numero\n");
scanf("%d",&n2 );
printf("Inserisci il valore del terzo numero\n");
scanf("%d",&n3 );
printf("Inserisci il valore del quarto numero\n");
scanf("%d",&n4 );

prod=n1*n2*n3*n4;
somm=n1+n2+n3+n4;
media=n1+n2+n3+n4/4;

printf("Il prodotto vale : %d\n", prod);
printf("La somma vale : %d\n", somm);
printf("La media vale : %f\n", media);

}