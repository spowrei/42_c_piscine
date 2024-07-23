#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *p;
	int size;
	int index;

	size = max - min;

	if (size < 1)
		return (NULL);

	p = (int *)malloc(sizeof(int) * (size));

	if (p == NULL)
		return (NULL);

	index = 0;
	while (index < size)
	{
		p[index] = index + min;
		index++;
	}

	return (p);
}

int main()
{
	int *ptr;
	int index;
	int min = 5;
	int max = 12;

	ptr = ft_range(min, max);

	index = 0;
	while (index < max - min)
	{
		printf("%d, ", ptr[index]);
		index++;
	}

	free(ptr);
	return 0;
}