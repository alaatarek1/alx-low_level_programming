#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 * 
 * Return: Always 0 (success)
*/

int main(void)
{
   char *h = "_putchar\n";

	while (*h)
	{
		_putchar(*h);
		h++;
	}


    return(0);
}
