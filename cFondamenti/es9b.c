/*9) Scrivere un programma che prenda in input il valore di una casa e il codice della zona in cui si trova (1, 2, 3 o 4). 
   Il programma deve calcolare la tassa di proprieta' come percentuale del valore della casa. 
     In zona 1, la percentuale e' 5%. 
     In zona 2, la percentuale e' 10%.
     In zona 3, la percentuale e' 15%. 
     In zona 4, la percentuale e' 20%.
   Il programma deve visualizzare l'importo della tassa se la zona varia tra 1 e 4, altrimenti un messaggio di errore. */

#include<stdio.h>

int main(){

	float valore,t;
	int zona;

	printf("Inserie il valore della casa : \n");
	scanf("%f",&valore);
    printf("Inserie zona della casa (1,2,3,4) : \n");
	scanf("%d",&zona);

switch(zona){

	case 1: 
	t=valore*5/100;
	printf("Le tasse da pagare sono : %f\n", t);
	break;
	case 2:
	t=valore*10/100;
	printf("Le tasse da pagare sono : %f\n", t);
	break;
	case 3:
	t=valore*15/100;
	printf("Le tasse da pagare sono : %f\n", t);
	break;
	case 4:
	t=valore*20/100;
	printf("Le tasse da pagare sono : %f\n", t);
	break;
	default:
	printf("ERRORE ZONA SCONOSCIUTA\n");
	break;

}

/*
if (zona==1)
{
	t=valore*5/100;
	printf("Le tasse da pagare sono : %f\n", t);
}else if (zona==2)
{
	t=valore*10/100;
	printf("Le tasse da pagare sono : %f\n", t);
}else if (zona==3)
{
	t=valore*15/100;
	printf("Le tasse da pagare sono : %f\n", t);
}else if (zona==4)
{
	t=valore*20/100;
	printf("Le tasse da pagare sono : %f\n", t);
}else
 printf("Zona non riconoscuta\n");*/

}