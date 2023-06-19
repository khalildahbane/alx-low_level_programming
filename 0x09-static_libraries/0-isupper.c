#include "main.h"

/**
 * _isupper - this program return either 1 or 0
 *
 *  @c: character in ascii code
 *
 * Return:0 or 1
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
