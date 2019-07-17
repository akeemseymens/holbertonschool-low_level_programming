include "holberton.h"

/**
 *argstostr- concats all the arguments
 *@ac:int
 *@av:char
 *Return: char
 */

char *argstostr(int ac, char **av)
{

	char *tmp;
	int i, j, x = 0, count = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	tmp = malloc(sizeof(char) * (count+1));

	if (ar == NULL)
		return (NULL);
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
