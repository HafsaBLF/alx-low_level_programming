#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * op_add - addition
 *@a: 1st nbr
 *@b: 2end nbr
 *
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 *@a: 1st nbr
 *@b: 2end nbr
 *
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 *@a: 1st nbr
 *@b: 2end nbr
 *
 * Return: sub
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 *@a: 1st nbr
 *@b: 2end nbr
 *
 * Return: sub
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo
 *@a: 1st nbr
 *@b: 2end nbr
 *
 * Return: sub
 */
int op_mod(int a, int b)
{
	return (a % b);
}
