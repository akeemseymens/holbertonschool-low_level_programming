#include "holberton.h"
/**
 * _isdigit - checks for a digit 0 thru 9.
 *@c - is an int.
 * Return: Always 0.
 */
int _isdigit(int c)
{

	if (c >= '0' && c<= '9')
	{
		return(1);
	}else
		return(0);
}
