#include "main.h"
#include <unistd.h>

/**
 * _putchar - wrtes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * On error, -1 isreturned, and errno s set appropriately
*/
int _putchar(charc)
{
	return (write(1, &c, 1));
}
