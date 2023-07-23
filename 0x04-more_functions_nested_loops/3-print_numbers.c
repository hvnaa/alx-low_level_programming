#include "main.h"
/**
*print_numbers - function that print numbers from
*0 to 9
*
*Retun: return 0
*/
void print_numbers(void)
{
char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
