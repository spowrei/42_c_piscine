#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *p;
	int size;
	int index;

	if (min >= max)
		return (NULL);

	size = max - min;
	p = (int *)malloc(size*4);

	index = 0;
	while (index < size)
	{
		p[index] = min + index;
		index++;
	}

	return (p);
}

int main()
{
	int *sayilar;
	int index;
	
	sayilar = ft_range(4,21);
	index = 0;
	while (sayilar[index])
	{
		printf("%d, ",sayilar[index]);
		index++;
	}

	free(sayilar);	
	return 0;
}