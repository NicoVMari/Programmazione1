#include <stdio.h>

#define DIM 4

void leggi_vettore(int v[])
{
    int i;

    for (i = 0; i < DIM; i++)
    {
        printf("Inserire valore in indice %d: ", i);
        scanf("%d", (v+i));
    }
}

void visualizza_vettore(int v[])
{
    int i;

    printf("Indice:\t");
    for (i = 0; i < DIM; i++)
        printf("%d\t", i);
    printf("\n");
    printf("Valori:\t");
    for (i = 0; i < DIM; i++)
        printf("%d\t", *(v + i));
}

float media_vettore(int v[])
{
    float media;
    int i,s;

    s = 0;
    for (i = 0; i < DIM; i++)
        s = s + *(v + i);

    media =(float)s / DIM;

    return media;
}

int calcola_massimo(int v[])
{
    int i;
    int max;

    for (i = 0; i < DIM; i++)
    {
        if (i == 0)
            max = *(v + i);
        else 
            if (*(v + i) > max)
            max = *(v + i);
    }

    return max;
}

int calcola_minimo(int v[])
{
    int i;
    int min;

    for (i = 0; i < DIM; i++)
    {
        if (i == 0)
            min = *(v + i);
        else 
            if (*(v + i) < min)
            min = *(v + i);
    }

    return min;
}

int main()
{
    int v[DIM], massimo, minimo;
    float media;

    leggi_vettore(v);
    visualizza_vettore(v);
    media = media_vettore(v);
    massimo = calcola_massimo(v);
    minimo = calcola_minimo(v);

    printf("\n");
    printf("La media è:%f\n", media);
    printf("Il massimo è:%d\n", massimo);
    printf("Il minimo è:%d\n", minimo);

    return 1;
}