#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of args
 * @argv: argument vactor
 * Return: 0 (Success)
*/

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
	{
		printf("Erorr\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Erorr\n");
		exit(2);
	}
	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");


	return (0);
}
