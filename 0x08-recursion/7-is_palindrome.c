#include "holberton.h"
int _strlen(char *s, int i);
int isPalRec(char *s, int f, int e);
/**
 * is_palindrome - Function to check whether a number is palindrome or not.
 * @s: character pointer.
 * Return: function isPalRec.
 */

int is_palindrome(char *s)
{
	int n;

	n = _strlen(s, 0);

	return (isPalRec(s, n, 0));
}
/**
 * _strlen - a function that returns the length of a string.
 *@s: pointer variable
 *@i: int variable.
 * Return: Always 0.
 */

int _strlen(char *s, int i)
{
	if (s[i] != '\0')
	{
		return (_strlen(s, ++i));
	}
	return (--i);
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
	if (s[e] == s[f] && f != e)
		return (isPalRec(s, --f, ++e));
	if (s[e] == s[f] || e >= f)
		return (1);
	if (s[e] != s[f])
		return (0);
	return (1);
}
