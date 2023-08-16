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
	int byte, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Erorr\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Erorr\n");
		exit(2);
	}

	for (index = 0, index < byte; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == byte - 1)
			continue;
		printf(" ");

		address++;
	}
	printf("\n");
	return (0);
}
