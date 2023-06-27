#include "main.h"

/**
 *printcharacter - prints a character
 *Return: 1
 *
 */
int printchar(char str)
{
	_putchar(str);
	return (1);
}
/**
 *printstring - prinst a string
 *Return: length of string
 *
 */
int printstring(char p)
{
	int i;
	if (p == NULL)
		p = "(NULL)";
	for (i = 0; p[i] != '\0'; i++)
		_putchar(p[i]);
	return (i);
}
/**
 *printpercentage - prints the percent sign
 *Return: 1
 */
int printpercentage(char q)
{
	_putchar(q);
	return (1);
}
/**
 *_printf - produces output according to a format
 *@format: string considered
 *Return: nothing
 *
 */

int _printf(const char *format, ...)
{
	int i, len;


	if (format)
	{
		while(format[i])
		{
			switch (format[i])
			{
				case 'c':
					printchar(format[i]);
					break;
				case 's':
					printstring(format[i]);
					break;
				case '%':
					printpercent(format[i]);
					break;
				default:
					i++;
					continue;
			}
			i++;
		}
	}
	return;

}
