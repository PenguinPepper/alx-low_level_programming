#include <stdio.h>
/**
 * main - Print the size of various types on the computer
 *
 * Description: It will determain the size of types as they run
 * Return: return the value of void, 0 (success)
 */
int main(void)
{
	int x;
	char z;

	printf("Size of a char:%d byte(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
