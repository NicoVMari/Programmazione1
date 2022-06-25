/*9) Scrivere un programma che legge da tastiera il valore di n,
legge da tastiera una sequenza di n interi, 
e  calcola i seguenti  valori:

- il minimo numero

- il massimo numero

- la somma n1 + n3 + n5 + ... (numeri in posizione dispari)

- la somma n2 + n4 + n6 + ... (numeri in posizione pari)

- la somma totale di tutti i numeri letti

Esempi di esecuzione
--------------------

Se la sequenza in input e'

10 2 20 5 6 1 40 1 30 

deve essere stampato

min = 1
max = 40
somma dispari = 106
somma pari = 9
somma totale = 115*/

#include<stdio.h>

int main(){

int min,max,somd=0,somp=0,somtot=0;
int n,x;
int i=0;

printf("Quanti valori : \n");
scanf("%d", &n);

while(i<n){

printf("Inserisci valore : \n");
scanf("%d", &x);

if(i==0){
	min=x;
	max=x;
}else if (x>max)
        {
	      max=x;
        }else if(x<min)
                {
                  min=x;
                }

if(x%2==0){
	somp=somp+x;
}
if(x%2==1){
	somd=somd+x;
}

somtot=somtot+x;

i++;


}

printf("Max : %d\n", max);
printf("Min : %d\n", min);
printf("Somma pari : %d\n", somp);
printf("Somma dispari : %d\n", somd);
printf("Somma totale : %d\n", somtot);


}
//4 -10 -30 50 100 25 -2 29 60 