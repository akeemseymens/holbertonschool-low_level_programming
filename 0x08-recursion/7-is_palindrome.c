#include "holberton.h"
int _strlen(char *s);
int isPalRec(char *s, int f, int e);
/**
 * is_palindrome - Function to check whether a number is palindrome or not.
 * @s: character pointer.
 */

int is_palindrome(char *s)
{
	int n = _strlen(s);

	if (n == 0)
		return (1);

	return (isPalRec(s, 0, n-1));
}
/**
 * _strlen - a function that returns the length of a string.
 *@s: pointer variable
 * Return: Always 0.
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s+1));
}

/**
 * isPalRec - cheack to see if its a palindrome or not.
 *@s: pointer variable
 *@f: integer
 *@e: integer
 * Return: Always 0.
 */


int isPalRec(char *s, int f, int e)
{
	if (f == e)
		return (1);

	if (s[f] != s[f])
		return (0);
	if (f < e + 1)
		return (isPalRec(s, f + 1, e - 1));
	return(0);
}
