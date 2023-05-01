#include "main.h"

/**
 *  * get_precision - Calculates the precision for printing
 *   * @format: The format string containing the conversion specification
 *    * @idx: A pointer to the current index in the format string
 *     * @args: The list of arguments to be printed
 *      *
 *       * Return: The precision value, or -1 if no precision is specified
 */

int get_precision(const char *format, int *idx, va_list args)
{
	int curr_idx = *idx + 1;
	int precision = -1;

	if (format[curr_idx] != '.')
		return (precision);

	precision = 0;

	for (curr_idx++; format[curr_idx] != '\0'; curr_idx++)
{
	if (is_digit(format[curr_idx]))
{
	precision *= 10;
	precision += format[curr_idx] - '0';
}
	else if (format[curr_idx] == '*')
{
	curr_idx++;
	precision = va_arg(args, int);
	break;
}
	else
	break;
}

	*idx = curr_idx - 1;

	return (precision);
}
