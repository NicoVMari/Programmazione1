
#include<stdio.h>
#include<math.h>

int main(){

int n;

printf("Inserisci un valore\n");
scanf("%d",&n);

if (n<0)
{
  printf("ERRORE\n");
}else{
for (int x = 0; x < n; ++x)
{
    for (int y = 0; y < n; ++y)
    {
        if (x-y==0)
        {
          printf(" 0 ");
        }else if(x>y)
        {
          printf(" Y ");
        }else
          printf(" X ");

         
    }
     printf("\n");
}
 printf("\n");
}

} 