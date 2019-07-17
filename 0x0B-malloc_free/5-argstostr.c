#include "holberton.h"

/**
 *argstostr- concats all the arguments
 *@ac:int
 *@av:char
 *Return: char
 */

char *argstostr(int ac, char **av)
{

	char *tmp;
	int i, j, x = 0;
	int count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	tmp = (char *)malloc((count + 1) * sizeof(char));

	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	for (x = 0; x < count;)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++, x++)
				tmp[x] = av[i][j];

			tmp[x] = '\n';
			x++;
		}
	}

	return (tmp);
}
