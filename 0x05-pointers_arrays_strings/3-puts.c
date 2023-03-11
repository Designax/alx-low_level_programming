#include "main.h"
#include <string.h>
/**
 * _puts - this is a fuction that puts
 * @str: a param to _puts fuction
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
