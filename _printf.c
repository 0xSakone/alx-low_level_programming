#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * cprintf - display character to standart output
 * @buf: string buffer
 * @len: lenght of given format text
 * Return: number of caracter;
 */
int cprintf(char *buf, int len)
{
	return (write(1, buf, len));
}

/**
 * print_number - print number
 * @n: number to print
 * @count: number character count
 * Return: number of caracter
 */
int print_number(int n, int count)
{
	int n2;
	char *sign = "-";
	char c[1];

	if (n < 0)
	{
		n2 = -n;
		cprintf(sign, 1);
	}
	else
		n2 = n;

	if ((n2 % 10) != n2)
		count = print_number(n2 / 10, count++);

	c[0] = (char)((n2 % 10) + '0');
	cprintf(c, 1);
	return (count);
}

/**
 * character_format - character formater
 * @c: character
 * Return: number of character
 */
int character_format(char c)
{
	return (cprintf(&c, 1));
}

/**
 * string_format - string text formater
 * @s: string
 * Return: number of character
 */
int string_format(char *s)
{
	cprintf(s, _strlen(s));
	return (_strlen(s) - 1);
}

/**
 * _printf - printf function simulator
 * @format: text format
 * Return: number of character
 */
int _printf(const char * const format, ...)
{
	int i = 0, count = 0;
	char current_character;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		current_character = format[i];
		if (current_character == '%')
		{
			i++;
			current_character = format[i];
			switch (current_character)
			{
				case 'c':
					count++;
					character_format((char)va_arg(args, int));
					break;
				case 'i':
					count += print_number(va_arg(args, int), 1);
					break;
				case 'f':
					count += print_number(va_arg(args, int), 1);
					break;
				case 'd':
					count += print_number(va_arg(args, int), 1);
					break;
				case 's':
					count += string_format(va_arg(args, char *));
					break;
			}
		}
		else
		{
			count++;
			cprintf(&current_character, 1);
		}
		i++;
	}
	return (count);
}
