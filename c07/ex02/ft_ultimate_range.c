#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int index;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * 4);
	index = 0;
	while (index < size)
	{
		(*range)[index] = min + index; // buraya dikkat
		index++;
	}

	return (size);
}

int main()
{
	int *p;
	int size = ft_ultimate_range(&p, 5, 10);
	int index;

	index = 0;
	while (index< size)
	{
		printf("%d, ", p[index]);
		index++;
	}
	free(p);
	return 0;
}