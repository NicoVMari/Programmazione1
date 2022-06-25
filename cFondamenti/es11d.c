#include<stdio.h>
#include<math.h>


int main(){
	
int n;

printf("Quanto deve essere grande il vettore ? ");
scanf("%d",&n);

int v1[n];
int v2[n];

for (int i = 0; i < n; ++i)
{
	printf("v [%d] = ", i);
	scanf("%d",&v1[i]);
}

int j=0;
int p;

for (int i = 0; i < n; ++i)
{
	if (v1[i] != 0)
	{
		p=0;
		for (int k = 0; k < j; ++k)
		{
			if (v2[k]==v1[i])
			{
				p=1;
			}
		}
		if (!p)
			{
				v2[j]=v1[i];
				j++;
			}
	}
}


for (int k = 0; k < j; k++)
{
	printf("%d\t",v2[k]);
}


}

/*11. Scrivere un programma che legga da tastiera una sequenza ordinata di N
numeri interi eventualmente intervallati da alcuni 0 e li memorizzi in un
vettore. Il programma deve generare un secondo vettore che compatta i
numeri contenuti nel primo vettore. In particolare:
• ogni numero che compare ripetuto nel primo vettore, deve comparire
una sola volta nel secondo vettore
• ogni numero uguale a zero presente nel primo vettore non deve comparire nel secondo vettore.
Il programma deve visualizzare il contenuto del secondo vettore. Ad esempio, si supponga N=10 e si consideri la sequenza di numeri 1 1 3 0 4 6
0 6 8 9 inseriti da tastiera. Il programma deve visualizzare 1 3 4 6 8 9.
*/