#include "main.h"
#include <string.h>
/**
 * _puts - this is a fuction that puts
 * @str: a param to _puts fuction
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
