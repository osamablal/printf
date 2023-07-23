#include "main.h"

/**
 * is_printable - Evaluates if a char is printable or not
 * @c: Char to checked.
 *
 * Return: 1 if printable, or 0 if not
 */
int is_printable(char c)
{
	/* Check if the ASCII value of the character is within the printable range */
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ASCII in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: Index for appending.
 * @ascii_code: ASCII CODE.
 * Return: 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexadecimal format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifies if a char is an int
 * @c: Char to be evaluated
 *
 * Return: 1 if c is a digit,or 0 if not
 */
int is_digit(char c)
{
	/* Check if the character is  digit (0 to 9) */
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Casts a number to the size
 * @num: Number to be casted.
 * @size: Number for type to be casted.
 *
 * Return: Casted
 */
long int convert_size_number(long int num, int size)
{
	/* Convert the number to the specified size (long, short, or int) */
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Casts a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: Casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
