#include <stdio.h>

int main()
{
	// Folie 51 - Stellenzahl als Parameter
	printf("\nBeispiel aus Folie 51\n\n");
	
	int wert = 123;
	printf("ohne Zusatzangabe:\t %d!\n", wert);
	printf("mit * und 5      :\t %*d!\n",5, wert);
	printf("mit * und 10     :\t %*d!\n",10, wert);
	printf("mit -* und 10    :\t %-*d!\n",10, wert);
	
	return 0;
}