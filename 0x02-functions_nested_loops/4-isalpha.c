#include "main.h"
/**
 * _isalpha - function that checks for alphabetical character
 * Return: int.
 * @c: check for the input character
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
