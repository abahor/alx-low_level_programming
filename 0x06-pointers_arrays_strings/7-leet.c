#include "main.h"

/**
* leet - Entry point
* @str: the string
* Return: the string
*/

char *leet(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] == 'a' || str[index] == 'A')
	str[index] = '4';
	if (str[index] == 'e' || str[index] == 'E')
	str[index] = '3';
	if (str[index] == 'o' || str[index] == 'O')
	str[index] = '0';
	if (str[index] == 't' || str[index] == 'T')
	str[index] = '7';
	if (str[index] == 'l' || str[index] == 'L')
	str[index] = '1';

	index++;
	}
	return (str);
}
