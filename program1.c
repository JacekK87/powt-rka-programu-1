#include<stdio.h>/* dolaczamy biblioteki standardowej input-output*/
 int main () /*funkcja glowna programu*/
{

	puts("Pierwszy program");/*puts =>put string*/
				/*wyswietla ciag zznakow*/
				/*puts - funkcja z biblioteki standardowej*/
				/*automatycznie przechodzi do nowej lini*/
	putchar('g');
	putchar('\n'); /*znak konca lini*/
	putchar('\t');/*tabulator*/	
/*	putchar('\r');*//*powrót karetki - kursor powraca na poczatek lini*/
	putchar('\\');/*wypisuje \*/

return 0;

}	/*klamry oznaczaja blok programu, zwykle cialo funkcji*/
