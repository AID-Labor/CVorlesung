#include <stdio.h>

int main()
{
	// Folie 50 - 0 statt Leerzeichen
	printf("\nBeispiel aus Folie 50\n\n");
	
	int wert = 123; 
	printf("Notation mit 2 Stellen:\t %02d\n", wert); 
	printf("Notation mit 5 Stellen:\t %05d\n", wert); 
	printf("Notation mit 8 Stellen:\t %08d\n", wert);
	
	return 0;
}