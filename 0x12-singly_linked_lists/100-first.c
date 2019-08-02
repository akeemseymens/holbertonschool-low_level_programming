#include <stdio.h>

/**
 * firstMessage - print a string before main
 */
void firstMessage(void) __attribute__ ((constructor));
void firstMessage(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
