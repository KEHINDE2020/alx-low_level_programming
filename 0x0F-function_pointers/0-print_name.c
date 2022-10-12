#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints out a name to the screen
 * @name: string parameter (Name)
 * @f: pointer to function that take a string argument and returns nothing
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
