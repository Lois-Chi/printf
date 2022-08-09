#include "main.h"
/**
 * print_u - prints a decimal notation
 * @u: unsigned int specifier
 * Return: counter
 */
int print_u(va_list u)
{
	unsigned int a[10];
	unsigned int i, j, k, sum;
	int counter;

	k = va_arg(u, unsigned int);

	j = 1000000000; /* (10 ^ 9) */

	a[0] = k / j;
	for (i = 1; i < 10; i++)
	{
		j /= 10;
		a[i] = (k / j) % 10;
	}
	for (i = 0, sum = 0, counter = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			counter++;
		}
	}
	return (counter);
}
/**
 * print_o - prints an octal notation
 * @o: unsigned int param
 * Return: counter
 */
int print_o(va_list o)
{
	unsigned int a[11];
	unsigned int i, j, k, sum;
	int counter;

	k = va_arg(o, unsigned int);
	j = 1073741824; /* (8 ^ 10) */
	a[0] = k / j;
	for (i = 1; i < 11; i++)
	{
		j /= 8;
		a[i] = (k / j) % 8;
	}
	for (i = 0, sum = 0, counter = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			counter++;
		}
	}
	return (counter);
}
/**
 * print_b - prints it in binary notation
 * @b: unsigned int param
 * Return: counter
 */
int print_b(va_list b)
{
	unsigned int i, j, k, sum;
	unsigned int a[32];
	int counter;

	i = va_arg(b, unsigned int);
	j = 2147483648; /* (2 ^ 31) */
	a[0] = i / j;
	for (k = 1; k < 32; k++)
	{
		j /= 2;
		a[k] = (i / j) % 2;
	}
	for (k = 0, sum = 0, counter = 0; k < 32; k++)
	{
		sum += a[k];
		if (sum || k == 31)
		{
			_putchar('0' + a[k]);
			counter++;
		}
	}
	return (counter);
}
