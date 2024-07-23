#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int index;
	char *p;

	p = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	index = 0;
	while (src[index] != '\0')
	{
		p[index] = src[index];
		index++;
	}
	p[index] = src[index];
	return (p);
}

int main()
{
	char *ptr;
	ptr = ft_strdup("Mustafa");
	printf("%s", ptr);
	free(ptr);
}