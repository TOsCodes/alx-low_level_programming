#include "main.h"
/**
* _isdigit - checks if input number is a digit (0 through 9)
* @c: input number
* Return: 1 if number is between 0 to 9, and 0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
