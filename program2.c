#include<stdio.h>

int mnoz(int a, int b)		
{ return a * b; }
int dodaj (int a , int b)	{ return a + b; }
int main(void)
{
	int a = 2, b = 5; /* delklaracja wraz z inizjalizacją*/
	char wybor = '*';
	/* if (warunek) ( blok jeśli  wyrazenie prawdziwe)
	 else ( blok jeżeli wyrażenie fałszywe); */
	
	if(wybor == '*'){ /*sprawdza czy rowne to nie jest '=' */
			printf("Wynik mnożenia  %i\n", mnoz (a, b));
		}else{
			printf("wynik dodowania  %i\n", dodaj(a, b));
		}; /* ten srednik jests opcjonalny jezli wystepuje klamra*/

	return 0;
}
