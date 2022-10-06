#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: counts argument
 * @argv: Arguments
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%sn", argv[0]);
	return (0);
}
