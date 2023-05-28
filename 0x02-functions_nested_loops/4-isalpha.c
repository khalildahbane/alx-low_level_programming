#include "main.h"
/**
 * _isalpha - isoloalph
 * @c: Description of parameter x
 *
 * Description: isoloalpha
 * section header: Section description)*
 * Return: Description of the returned value
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
