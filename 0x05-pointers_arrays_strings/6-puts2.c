#include "main.h"
#include <stdio.h>
/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: input
* Return: print
*/
void puts2(char *str)
{
int longi = 0;
int t = 0;
char *y = str;
int o;
while (*y != '\0')
{
y++;
longi++;
}
t = longi - 1;
for (o = 0 ; o <= t ; o++)
{
if (o % 2 == 0)
{
putchar(str[o]);
}
}
putchar('\n');
}
