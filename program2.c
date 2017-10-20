#include<stdio.h>

int mnoz(int a, int b)
{
	return a*b;
}
int main()
{
	int wynik;

	wynik = mnoz(4,5);

	printf("Wynik mnozenia: %i\n", wynik);

	return 0;
}
