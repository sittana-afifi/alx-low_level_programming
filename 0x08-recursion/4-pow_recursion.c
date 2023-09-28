#include "main.h"

/**
 * _pow_recursion - returns the value of num1 raised to the power of num2.
 * @num1: base.
 * @num2: exponent.
 * Return: value of the exponentiation.
 */
int _pow_recursion(int num1, int num2)
{
	if (num2 < 0)
		return (-1);
	else if (num2 == 0)
		return (1);
	else
		return (num1 * _pow_recursion(num1, num2 - 1));
}
