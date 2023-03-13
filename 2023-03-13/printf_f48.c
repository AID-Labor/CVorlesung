#include <stdio.h>

int main()
{
	// Folie 48 - Nachkommastellen
	printf("\nBeispiel aus Folie 48\n\n");

	double wert = 123.456; 
	printf("Notation mit 2 NKS:\t %.2f\n", wert); 
	printf("Notation mit 5 NKS:\t %.5f\n", wert); 
	printf("Notation mit 8 NKS:\t %.8f\n", wert);

	return 0;
}