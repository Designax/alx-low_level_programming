#include "main.h"
#include<stdio.h>
void _puts(char *str);
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main() {
    char str [] = "I do not fear computers . I fear the lack of lack of them - Isaac Asimov";
    _puts(str);
    puts("\n");
    return 0;
}
void _puts(char *str) {
    int i = 0;
    while (str[i] != '\n' && str[i] != '\0')
    {
        putchar(str[i]);
        i ++;
    }
}
