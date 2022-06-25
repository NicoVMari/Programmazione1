#include<stdio.h>

int main(){

	int anno;

printf("Inserisci l'anno : \n");
scanf("%d",&anno);

if(anno%4==0 && anno%100!=0 || anno%400==0){

printf("anno --> %d\n",anno );
printf("L'anno %d e' bisestile\n",anno );

}else{
printf("anno --> %d\n",anno );
printf("L'anno %d non e' bisestile\n",anno );

}


}