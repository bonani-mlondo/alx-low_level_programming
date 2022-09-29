#include "main.h"
/**
* is_prime - detects if an input number is a prime number.
* @n: input number.
* @c: iterator.
* Return: 1 if n is a prime number. 0 if n is not a prime number.
*/
int power_operation(int n, int c)
{
if (c % (n / c) == 0)
{
if (c * (n / c) == n)
return (c);
else
return (-1);
}
return (0 + power_operation(n, c + 1));
}
/**
* is_prime_number - detects if an input number is a prime number.
* @n: input number.
* Return: 1 if n is a prime number. 0 if n is not a prime number.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
if (n == 1)
return (1);
return (power_operation(n, 2));
}
