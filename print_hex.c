#include "main.h"
/**
 * print_hex - prints a number in hexidecimal form
 * @n: unsigned int param
 * @c: flag
 * Return: 
 */
int print_hex(unsigned int n, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, j, sum;
	char diff;
	int counter;

	j = 268435456;
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / j;
	for (i = 1; i < 8; i++)
	{
		j /= 16;
		a[i] = (n / j) % 16;
	}
	for (i = 0, sum = 0, counter = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + diff + a[i]);
			counter++;
		}
	}
	return (counter);
}
/**
 * print_x - prints an x specifier
 * @x: unsigned int param
 * Return: counter
 */
int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}
/**
 * print_X - prints an X specifier
 * @X: unsigned int param
 * Return: number of digits printed
 */
int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}
/**
 * _pow - calculates an exponent
 * @base: base param
 * @exponent: exponent param
 * Return: base ^ exponent
 */
static unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int i;
	unsigned long ans = base;

	for (i = 1; i < exponent; i++)
	{
		j *= base;
	}
	return (ans);
}
/**
 * print_p - prints an address
 * @p: address param
 * Return: counter
 */
int print_p(va_list p)
{
	int counter = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long n, m;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			counter++;
		}
		return (counter);
	}
	_putchar('0');
	_putchar('x');
	counter = 2;
	m = _pow(16, 15); /* 16 ^ 15 */
	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			counter++;
		}
	}
	return (counter);
}
