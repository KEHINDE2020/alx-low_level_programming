#include <stdio.h>

/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: An array of a command listed
 * Return: 0 for success
 */
int main(int argc __attribute__((unused_)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
