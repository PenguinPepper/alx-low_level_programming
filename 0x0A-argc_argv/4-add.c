#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *
 */
int main(int argc, char *argv[])
{
	int n, j, k = 0;

	if (argc < 1)
		printf("0");
	for (n = 1; n < argc; n++)
	{
		k += atoi(argv[n]);
		for (j = 0; argv[n][j] != '\0'; j++)
		{
			if (!(isdigit(argv[n][j])))
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", k);
	return (0);
}