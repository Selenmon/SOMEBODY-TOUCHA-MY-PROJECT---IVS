#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float A;
	float B = 0;
	float s;
	float x = 0;

	float temp;

	unsigned int N = 0; // počet načtených čísel
	
	float *array; // pole načtených hodnot

	array = (float *)malloc(N * sizeof(float));

	if (array == 0)
	{
		fprintf(stderr ,"Alokace neproběhla úspěšně!\n");
		return 1;
	}
	
	printf("Zadávejte hodnoty pro výpočet směrodatné odchykly: \n");
	printf("Pro konec vstupu použijte control+D!\n");

	/*
	 * Načtení čísel ze vstupu do pole
	 */
	while (1)
	{	
		if (scanf("%f", &temp) == EOF)
		{
			break;
		}

		N++;
		array = (float *) realloc(array, N*sizeof(float));
		if (array == 0)
		{
			fprintf(stderr, "Realokace paměti neproběhla úspěšně!\n");
			return 1;
		}
		array[N-1] = temp;
	}

	if (N == 1 || N == 0)
	{
		fprintf(stderr, "Error - Počet čísel musí být větší než 1!\nDošlo by k dělení 0!\n");
		free(array);
		return 1;
	}

	A = 1.f / (N - 1);

	// výpočet x s pruhem
	for (int i = 0; i < N; i++)
	{
		x += array[i];
	}

	x = x / N;
	// konec výpočtu x s pruhem
	
	// výpočet hlavní sumy
	for (int i = 0; i < N; i++)
	{
		B += array[i] * array[i]; // předělat na mocninou funkci z knihovny
	}
	
	B = B - (N * x * x); // předělat na mocninou funkci z kinihovny
	// konec výpočtu hlavní sumy
	
	s = sqrt(A * B); // předělat na odmocninu z knihovny
	
	printf("%f\n", s);

	free(array);

	return 0;
}
