#include "main.h"

/**
 * _isdigit - checks if the character is a digit
 *
 *  @c: character in ascii code
 *
 * Return:0 or 1
 */


int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');

}
