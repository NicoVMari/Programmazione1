/*10) Scrivere un programma che dati in input i coefficienti a, b, c di una equazione di 2° grado, 
    calcola il discriminante Delta=(b*b - 4*a*c).
      Se Delta<0 il programma visualizza "nessuna soluzione". 
      Se Delta=0 il programma calcola e visualizza l'unica soluzione dell'equazione x=-b / (2*a)
      Se Delta>0 il programma calcola e visualizza le due soluzioni dell'equazione:
        x1=( -b + sqrt(b*b - 4*a*c) ) / (2*a)
        x2=( -b - sqrt(b*b - 4*a*c) ) / (2*a)
    Includere la libreria math.h per poter utilizzare la funzione sqrt (radice quadrata).*/

#include<stdio.h>
#include<math.h>

int main(){

int a,b,c;
float x1,x2;

printf("Inserire tre coefficienti \n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

int delta;

delta=(b*b - 4*a*c);

if (delta<0)
{
	printf("Nessuna soluzione\n");
}else if(delta==0){
      x1=-b/(2*a);
      printf("Una sola soluzione : %f\n",x1);
}else{
	x1=( -b + sqrt(b*b - 4*a*c) ) / (2*a);
	x2=( -b - sqrt(b*b - 4*a*c) ) / (2*a);
	printf("Due soluzioni : %f e %f\n",x1,x2);
}

}