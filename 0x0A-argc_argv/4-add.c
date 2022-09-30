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
	for (i = 1; i < argc; i++)
	{
		k += atoi(argv[n]);
		for (j = 0; argv[m][j] != '\0'; j++)
		{
			if (!(isdigit(argv[m][j])))
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", k);
	return (0);
}
