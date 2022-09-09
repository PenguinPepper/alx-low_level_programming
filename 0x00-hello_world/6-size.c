#include <stdio.h>
/**
 * main - Print the size of various types on the computer
 *
 * Description: It will determain the size of types as they run
 * Return: return the value of void, 0 (success)
 */
int main(void)
{
	char x;
	int i;
	long int y;
	long long int z;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(x));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(y));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(z));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
