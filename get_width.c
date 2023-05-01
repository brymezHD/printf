#include "main.h"

/**
<<<<<<< HEAD
 *  * get_width - Calculates the width for printing
 *   * @format: Formatted string in which to print the arguments
 *    * @i: Current index of the format string
 *     * @args: List of arguments to be printed
 *      *
 *       * Return: Width
 */

int get_width(const char *format, int *i, va_list args)
=======
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
>>>>>>> 4763691bb5a198b7266b8e4abbb640630f2abb16
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
<<<<<<< HEAD
{
	if (is_digit(format[curr_i]))
{
	width *= 10;
	width += format[curr_i] - '0';
}
	else if (format[curr_i] == '*')
{
	curr_i++;
	width = va_arg(args, int);
	break;
}
	else
	break;
}
=======
	{
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
>>>>>>> 4763691bb5a198b7266b8e4abbb640630f2abb16

	*i = curr_i - 1;

	return (width);
}
