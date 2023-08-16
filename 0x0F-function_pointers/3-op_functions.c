#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two int
 * @a: first int
 * @b: second int
 *
 * Return: sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two int
 * @a: first int
 * @b: second int
 *
 * Return: the difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiple two int
 * @a: first int
 * @b: second int
 *
 * Return: multiple
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two int
 * @a: first int
 * @b: second int
 *
 * Return: the quotient
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo two int
 * @a: first int
 * @b: second int
 *
 * Return: the remainder
*/

int op_mod(int a, int b)
{
	return (a % b);
}
