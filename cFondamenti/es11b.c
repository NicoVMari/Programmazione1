/*11) Un bancomat soddisfa una richiesta di prelievo di una somma di denaro adottando
    la seguente strategia:

    - Emette  fin che puo' banconote da 50 (ossia, emette banconote
      da 50 fin tanto che il totale non supera la somma richiesta).

    - Quando ha terminato con le banconote da 50, emette fin che
      puo' banconote da 20.
 
    Ad esempio, se la somma richiesta e' 190, verranno emesse
    3 banconote da 50 e 2 da 20.
    Si noti che non tutte le richieste possono essere soddisfatte.
    Ad esempio, se la somma richiesta e' 180, vengono emesse
    3 banconote da 50 e una da 20, per un totale di 170 euro.

    Scrivere un programma che chiede all'utente di inserire
    la somma richiesta (un intero), calcola quante banconote da
    50 e 20 verranno emesse e il totale corrispondente ai soldi emessi.

    I messaggi vanno scritti come negli esempi sotto, in particolare
    le banconote emesse vanno stampate solo quando il numero e' diverso da 0.

Esempi di esecuzione
--------------------

somma -->  500
banconote da 50: 10
Somma erogata: 500

somma -->  290
banconote da 50: 5
banconote da 20: 2
Somma erogata: 290

somma -->  40
banconote da 20: 2
Somma erogata: 40

somma -->  595
banconote da 50: 11
banconote da 20: 2
Somma erogata: 590

somma -->  48
banconote da 20: 2
Somma erogata: 40*/

#include<stdio.h>

int main(){

int somma,resto,e, n1,n2,n3,n4;

printf("Inserire la somma da prelevare\n");
scanf("%d",&somma);

printf("somma -->  %d\n",somma);

n1=somma/50;
if (n1>0)
{
	printf("Banconote da 50 : %d\n",n1);
}

resto=somma%50;
n2=resto/20;
if (n2>0)
{
	printf("Banconote da 20 : %d\n",n2);
}

resto=somma%20;
n3=resto/10;
if (n3>0)
{
	printf("Banconote da 10 : %d\n",n3);
}

resto=somma%10;
n4=resto/5;
if (n4>0)
{
	printf("Banconote da 5 : %d\n",n4);
}

e=n1*50+n2*20+n3*10+n4*5;
printf("Somma erogata:  %d\n",e);


}