#include "main.h"
/**
 * print_i - prints an integer
 * @i: integer param
 * Return: counter
 */
int print_i(va_list i)
{

	int a[10];
	int j, k, l, sum, counter;

	l = va_arg(i, int);
	counter = 0;
	k = 1000000000;

	a[0] = l / k;
	for (j = 1; j < 10; j++)
	{
		k /= 10;
		a[j] = (l / k) % 10;
	}
	if (l < 0)
	{
		_putchar('-');
		counter++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
/**
 * print_d - prints a decimal
 * @d: decimal param
 * Return: counter
 */
int print_d(va_list d)
{
	int a[10];
	int j, k, l, sum, counter;

	l = va_arg(d, int);
	counter = 0;
	k = 1000000000;
	a[0] = l / k;
	for (j = 1; j < 10; j++)
	{
		k /= 10;
		a[j] = (l / k) % 10;
	}
	if (l < 0)
	{
		_putchar('-');
		counter++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
