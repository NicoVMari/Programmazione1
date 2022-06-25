#include<stdio.h>

int main(){

int x,y;

printf("Inserire coordinate x e y : \n");
scanf("%d",&x);
scanf("%d",&y);

printf("(%d,%d)\n",x,y);

if(x==0 && y==0)
	printf("Le coordinate coincidono con l'origine\n");
else if((x<0||x>0) && y==0)
	printf("Le coordinate si trovano sull'asse delle x \n");
else if((y<0||y>0) && x==0)
    printf("Le coordinate si trovano sull'asse delle y \n");
else if(x>0 && y>0)
	printf("Le coordinate si trovano nel primo quadrante \n");
else if(x<0 && y>0)
	printf("Le coordinate si trovano nel secondo quadrante \n");
else if(x<0 && y<0)
	printf("Le coordinate si trovano nel terzo quadrante \n");
else if(x>0 && y<0)
	printf("Le coordinate si trovano nel quarto quadrante \n");
else
	printf("ERRORE CARICAMENTO COORDINATE\n");

}