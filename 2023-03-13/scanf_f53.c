#include <stdio.h>

int main()
{
	// Folie 53 - Beispiel für scanf
	printf("\nBeispiel aus Folie 53\n\n");
	
	int i;
	float f;
	scanf("%d", &i);
	printf("\nEingegebener Wert:\t %d\n", i);
	
	scanf("%i %f",&i,&f);
	printf("\nEingegebene Werte:\t %d\t%f\n", i,f);
	
	return 0;
}