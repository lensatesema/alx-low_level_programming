#include "main.h"
/**
 *_islower -checks for lowercase character
 * @c: single letter input
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
*/
int _islower(int c) 
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
