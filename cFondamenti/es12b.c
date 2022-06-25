#include<stdio.h>

int main(){

int mese;
int n1=31;
int n2=30;
int n3=28;



printf("Inserire il numero del mese\n");
scanf("%d",&mese);

switch(mese){

	case 1:
	printf("I giorni del mese sono : %d\n",n1);
	break;
	case 2:
	printf("I giorni del mese sono : %d\n",n3);
	break;
	case 3:
	printf("I giorni del mese sono : %d\n",n1);
	break;
	case 4:
	printf("I giorni del mese sono : %d\n",n2);
	break;
	case 5:
	printf("I giorni del mese sono : %d\n",n1);
	break;
	case 6:
	printf("I giorni del mese sono : %d\n",n2);
	break;
	case 7:
	printf("I giorni del mese sono : %d\n",n1);
	break
	case 8:
	printf("I giorni del mese sono : %d\n",n1);
	break;
	case 9:
	printf("I giorni del mese sono : %d\n",n2);
	break;
	case 10:
	printf("I giorni del mese sono : %d\n",n1);
	break;
	case 11:
	printf("I giorni del mese sono : %d\n",n2);
	break;
	case 12:
	printf("I giorni del mese sono : %d\n",n1);
	break;
	default:
	printf("Mese inesistente\n");
	break;
}

/*
switch(mese){

	case 1:	
	case 3:	
	case 5:	
	case 7:	
	case 8:	
	case 10:
	case 12:
	printf("I giorni del mese sono : %d\n",n1);
	break;

	case 4:
	case 6:
	case 9:
	case 11:
	printf("I giorni del mese sono : %d\n",n2);
	break;

	case 2:
	printf("I giorni del mese sono : %d\n",n3);
	break;

	default:
	printf("Mese inesistente\n");
	break;

*/

}