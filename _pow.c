#include "holberton.h"
/**
 * _pow - function to power of ten
 * @n: bla bla bla
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow(int n)
{
	int xres = 1;
	int p;

	for (p = 0; p < n; p++)
	{
		xres *= 10;
	}
	return (xres);
}


