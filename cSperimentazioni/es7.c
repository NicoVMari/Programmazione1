#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 127

void stringhe_genera(const char[]);
int stringhe_vocali();

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf("Errore\n");
		return 1;
	}
	else
	{
		stringhe_genera(argv[1]);
	}	

	return 0;
}

void stringhe_genera(const char nfile[])
{
	char str[DIM];
	
	FILE * file;
	file = fopen( nfile , "r");
	if (file) 
	{
    	while (fscanf(file, "%s", str)!=EOF)
    	{
       		printf("%s\n",str);
    	}

    	fclose(file);
	}
}

int stinghe_genera()
{

}