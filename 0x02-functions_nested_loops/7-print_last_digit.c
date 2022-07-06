#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 *
 * @k: checks the input number
 * Return: int.
 */
int print_last_digit(int k)
{
	k %= 10;
	if (k < 0)
		k *= -1;
	_putchar(k + '0');
	return (k);
}
