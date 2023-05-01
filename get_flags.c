#include "main.h"

/**
<<<<<<< HEAD
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
=======
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*i = curr_i - 1;

>>>>>>> 4763691bb5a198b7266b8e4abbb640630f2abb16
	return (flags);
}
