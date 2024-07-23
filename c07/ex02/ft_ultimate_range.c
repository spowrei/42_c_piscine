#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int index;

	size = max - min;

	if (size < 1)
		return (-1);
	(*range) = (int *)malloc(size * sizeof(int));

	index = 0;
	while (index < size)
	{
		(*range)[index] = min + index;
		index++;
	}

	return (size);
}

int main()
{
	int *p;

	int index;

	index = 0;
	while (index < ft_ultimate_range(&p, 5, 12))
	{
		printf("%d, ", p[index]);
		index++;
	}
	free(p);
	return 0;
}