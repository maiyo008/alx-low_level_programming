#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function to add two ints
 * @a:first number input
 * @b:second number input
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract two numbers
 * @a: first number input
 * @b: second number input
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply two numbers
 * @a: first number input]
 * @b: second number input
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide two numbers
 * @a: first number input
 * @b: second number input
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function to find modulus of two numbers
 * @a: first number input
 * @b: second number input
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
