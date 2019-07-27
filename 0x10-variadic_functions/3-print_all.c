#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * get_op_func - convert symbol into function
 * @s: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_char(va_list list)
{
	printf("%c", va_arg(list,  int));
}
/**
 * get_op_func - convert symbol into function
 * @s: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * get_op_func - convert symbol into function
 * @s: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * get_op_func - convert symbol into function
 * @s: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_char_ptr(va_list list)
{
	printf("%s", va_arg(list, char *));
}
/**
 * get_op_func - convert symbol into function
 * @s: string which may correspoind to function
 *
 * Return: function associated with s
 */
void print_all(const char * const format, ...)
{
	int i ;
	int j ;

	va_list list;

	va_start(list, format);

	op_t f_ops[] = {
		{"c" , op_char},
		{"i" , op_int},
		{"f" , op_float},
		{"s" , op_char_ptr},
	};

	for (i = 0; format[i] != '\0'; i++)
	{
		for (j = 0 ; j < 4; j++)
		{
			if (format[i] == *f_ops[j].c)
			{
				f_ops[j].ch(list);
				printf(" ");
			}
		}
	}

	va_end(list);
	printf("\n");
}
