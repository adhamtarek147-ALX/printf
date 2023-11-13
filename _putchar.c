#include <unistd.h>

/**
 * _putchar - writes the character made by me (adham)
 * character: The character to print
 * Return: 1
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}
