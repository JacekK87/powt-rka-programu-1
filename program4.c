#include<stdio.h>

int mnoz(int a, int b)	{ printf("Wynik mnożenia  %i\n", a*b);
			 return a * b;
			 }
int dodaj (int a , int b)	{ printf("Wynik dodawania  %i\n", a+b);
				  return a + b;
			 }
int odejmij (int a, int b) 	{ printf("Wynik odejmowania  %i\n", a-b);
				 return a - b;
			 }
int dziel (int a, int b)	{printf("Wynik dzielenia  %i\n", a/b);
				 return a / b;
			 }

int main(void)
{
	int a = 2, b = 5; /* delklaracja wraz z inizjalizacją*/
	char wybor;

	scanf("%c" , &wybor); /*czytaj z konsloi z zapisz wartosc pod  wybor*/

	/* if (warunek) ( blok jeśli  wyrazenie prawdziwe)
	 else ( blok jeżeli wyrażenie fałszywe); */
	
	if(wybor == '*'){ /*sprawdza czy rowne to nie jest '=' */
			 mnoz (a, b);
		}else if(wybor == '+') {
			 dodaj(a, b);
		} else if (wybor == '-') {
			 odejmij(a,b); 
		} else if ( wybor == '/') {
			 dziel (a, b);
		} else {
	}

	return 0;
}
