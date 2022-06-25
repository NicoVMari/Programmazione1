#include<stdio.h>
#include<math.h>

int main(){

int r,c;

printf("Inserisci il valore delle righe\n");
scanf("%d",&r);
printf("Inserisci il valore delle colonne\n");
scanf("%d",&c);

for (int x = 0; x < r; ++x)
{
    for (int y = 0; y < c; ++y)
    {
          printf("X");
    }
     printf("\n");
}
 printf("\n");

} 