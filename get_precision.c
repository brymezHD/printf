#include "main.h"

/**
<<<<<<< HEAD
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
=======
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int curr_i = *i + 1;
	int precision = -1;

	if (format[curr_i] != '.')
>>>>>>> 4763691bb5a198b7266b8e4abbb640630f2abb16
		return (precision);

	precision = 0;

<<<<<<< HEAD
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
=======
	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			precision *= 10;
			precision += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (precision);
}

>>>>>>> 4763691bb5a198b7266b8e4abbb640630f2abb16
