#include <stdio.h>
#include <stdlib.h>
#include "../MathLib.h"
#include <math.h>

int main()
{
	float A = 0.f;
	float B = 0.f;
	float s = 0.f;
	float x = 0.f;

	float temp;

	unsigned int N = 0; // počet načtených čísel
	
	float *array; // pole načtených hodnot

	//pouze pro profiling
	//N = 10;
	//N = 100;
	//N = 1000;
	//konec pouze pro profiling
	
	
	array = (float *)malloc(CalcMul(N,  sizeof(float)));

	if (array == 0)
	{
		fprintf(stderr ,"Alokace neproběhla úspěšně!\n");
		return 1;
	}
	
	printf("Zadávejte postupně po jedné hodnoty pro výpočet směrodatné odchykly: \n");
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
		array = (float *) realloc(array, CalcMul(N, sizeof(float)));
		if (array == 0)
		{
			fprintf(stderr, "Realokace paměti neproběhla úspěšně!\n");
			return 1;
		}
		array[N-1] = temp;
	}
	
	//pouze pro profiling
	/*for (int i = 0; i < N; i++)
	{
		array[i] = i+1;
	}*/
	//konec pouze pro profiling

	if (N <= 1)
	{
		fprintf(stderr, "Error - Počet čísel musí být větší než 1!\nDošlo by k dělení 0!\n");
		free(array);
		return 1;
	}

	A = CalcDiv(1.f, CalcSub(N ,1.f));

	// výpočet x s pruhem
	for (int i = 0; i < N; i++)
	{
		x += array[i];
	}
	x = CalcDiv(x, N);
	// konec výpočtu x s pruhem
	
	// výpočet hlavní sumy
	for (int i = 0; i < N; i++)
	{
		B = CalcAdd(B ,CalcPow(array[i], 2.f)); // předělat na mocninou funkci z knihovny
	}
	B = CalcSub(B ,(CalcMul(N ,CalcPow(x,2.f)))); // předělat na mocninou funkci z kinihovny
	// konec výpočtu hlavní sumy
	
	s = CalcNRT((CalcMul(A, B)), 2.f); // předělat na odmocninu z knihovny
	
	printf("Výběrová směrodatná odchylka (s) = %.4f\n", s);

	free(array);

	return 0;
}
