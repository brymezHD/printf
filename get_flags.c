#include "main.h"

/**
 *  * get_flags - calculates active flags
 *   * @format: formatted string in which to print the arguments
 *    * @pos: position of the current character in the format string
 *     *
 *      * Return: integer representing active flags
 */

int get_flags(const char *format, int *pos)
{
	int i, curr_pos;
	int flags = 0;
	const char flags_chars[] = {'-', '+', '0', '#', ' ', '\0'};
	const int flags_values[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_pos = *pos + 1; format[curr_pos] != '\0'; curr_pos++)
{
	for (i = 0; flags_chars[i] != '\0'; i++)
{
	if (format[curr_pos] == flags_chars[i])
{
	flags |= flags_values[i];
	break;
}
}
	if (flags_chars[i] == 0)
	break;
}
	*pos = curr_pos - 1;
	return (flags);
}
