#include "main.h"

/**
 * _islower - unction that checks for lowercase character
 *
 * @C: check input in function
 * Return: 1 if `C` is lowercase
 *        otherwise return 0 (Success)
*/

int _islower(int C)
{
	if (C >= 97 && C <= 122)
		return (1);
	return (0);
}
