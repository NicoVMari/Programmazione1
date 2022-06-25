#include<iostream>
#include<math.h>

float aCerchio(float r_cerchio);
float aQuadrato(float l_quadrato);

float aCerchio(float r_cerchio)
{
	float area;

	area=3.14*r_cerchio*r_cerchio;

	return area;
}

float aQuadrato(float l_quadrato)
{
	float area;

	area=l_quadrato*l_quadrato;

	return area;
}


int main(){
	
	float r,l;
	int sc;

	printf("Area del quadrato o cerchio ? 1 = quadrato 2 = cerchio : ");
    scanf("%d",&sc);

    if (sc==1)
    {
    	printf("Inserisci il lato : ");
		scanf("%f",&l);

		printf("Area del quadrato : %f", aQuadrato(l));
		printf("\n");
    }
    else if(sc==2)
    {
    	printf("Inserisci il raggio : ");
		scanf("%f",&r);

		printf("Area del cerchio : %f", aCerchio(r));
		printf("\n");
    }

	
	

	return 0;
}

