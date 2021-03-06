#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_char - prints string
 * @list: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_char(va_list list)
{
	printf("%c", va_arg(list,  int));
}
/**
 * op_int - print integer
 * @list: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * op_float - print float
 * @list: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * op_char_ptr - print string
 * @list: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_char_ptr(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - prints all
 * @format: string which may correspoind to function
 *
 * Return: function associated with s
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *separator = "";
	va_list list;

	op_t f_ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_char_ptr},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		/*printf("%d i",i);*/
		while (f_ops[j].c)
		{
			/*printf("%d j",j);*/

			if (*f_ops[j].c == format[i])
			{
				printf("%s", separator);
				f_ops[j].ch(list);
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;

	}
	printf("\n");
	va_end(list);
}
