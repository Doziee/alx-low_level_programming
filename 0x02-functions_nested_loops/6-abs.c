#include "main.h"
/**
 * _abs -function that computes the absolute value of an integer.
 * @p: The input number to check
 * Return: int.
 */
int _abs(int p)
{
	if (p < 0)
{
	p = p * (-1);
	return (p);
}
else
return (p);
}
