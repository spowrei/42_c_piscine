#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *p;
	int i = 0;

	int size = 0;
    while (src[size] != '\0')
    {
        size++;
    }

	p = (char *)malloc(size + 1);

	if (p == NULL)
    {
        return NULL; // Bellek tahsisi başarısız oldu
    }

	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';

	return (p);
}

int main()
{
	char *original = "Mustafa";
	char *p;

	p = ft_strdup(original);
	printf("%s",p);

	free(p);
	return 0;
}