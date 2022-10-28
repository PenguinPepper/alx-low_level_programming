#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number to be fliped
 * @m: number to be fliped to
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m, bits = 0;

	while (XOR > 0)
	{
		bits += (XOR & 1);
		XOR >>= 1;
	}
	return (bits);
}
