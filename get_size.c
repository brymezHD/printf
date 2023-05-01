#include "main.h"

/**
 *  * get_cast_size - Calculates the size to cast the argument
 *   * @format: Formatted string in which to print the arguments
 *    * @index: Pointer to the current index in the format string
 *     *
 *      * Return: Size of cast to be used for argument
 */

int get_cast_size(const char *format, int *index)
{
	int curr_index = *index + 1;
	int cast_size = 0;

	if (format[curr_index] == 'l')
		cast_size = S_LONG;
	else if (format[curr_index] == 'h')
		cast_size = S_SHORT;

	if (cast_size == 0)
		*index = curr_index - 1;
	else
		*index = curr_index;

	return (cast_size);
}
